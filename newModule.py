import os
import re

def prompt_comp_name():
    # 1. Step:
    # Prompt the user for a component name and validate it
    # only allow lowercase alphanumeric characters and underscores
    # the component name must start with a letter and be at least 3 characters long
    # 2. Step:
    # Prompt the user for a beautifed component name and validate it
    # only allow alphanumeric characters, underscores, dashes and spaces
    # the beautifed component name must start with a letter and be at least 3 characters long
    while True:
        comp_name = input("Enter the component name (lowercase, alphanumeric, underscores, at least 3 characters): ")
        if re.match(r'^[a-z][a-z0-9_]{2,}$', comp_name):
            break
        else:
            print("Invalid component name. Please try again.")
    while True:
        beautified_name = input("Enter the beautified component name (alphanumeric, underscores, dashes, spaces, at least 3 characters): ")
        if re.match(r'^[a-zA-Z][a-zA-Z0-9_\-\s]{2,}$', beautified_name):
            break
        else:
            print("Invalid beautified component name. Please try again.")
    return comp_name, beautified_name

def prompt_author_name():
    # Prompt the user for an author name and validate it
    # only allow alphanumeric characters, underscores, dashes and spaces
    # the author name can be any length but must not be empty
    while True:
        author_name = input("Enter the author name (alphanumeric, underscores, dashes, spaces): ")
        if re.match(r'^[a-zA-Z0-9_\-\s]+$', author_name):
            break
        else:
            print("Invalid author name. Please try again.")
    return author_name

def prompt_xeh_required():
    # Prompt the user for a boolean value (yes/no) and validate it
    # only allow 'yes', 'y', 'no', 'n' (case insensitive)
    # default to 'no' if the user just presses enter
    while True:
        xeh_required = input("Is XEH required? (yes/no) [default: no]: ")
        if xeh_required == "":
            return False
        elif re.match(r'^(yes|y|no|n)$', xeh_required, re.IGNORECASE):
            return xeh_required.lower() in ['yes', 'y']
        else:
            print("Invalid input. Please enter 'yes' or 'no'.")

def prompt_data_folder_required():
    # Prompt the user for a boolean value (yes/no) and validate it
    # only allow 'yes', 'y', 'no', 'n' (case insensitive)
    # default to 'no' if the user just presses enter
    while True:
        data_folder = input("Is a data folder required? (yes/no) [default: no]: ")
        if data_folder == "":
            return False
        elif re.match(r'^(yes|y|no|n)$', data_folder, re.IGNORECASE):
            return data_folder.lower() in ['yes', 'y']
        else:
            print("Invalid input. Please enter 'yes' or 'no'.")

def prompt_stringtable_required():
    # Prompt the user for a boolean value (yes/no) and validate it
    # only allow 'yes', 'y', 'no', 'n' (case insensitive)
    # default to 'no' if the user just presses enter
    while True:
        stringtable = input("Is a stringtable.xml required? (yes/no) [default: no]: ")
        if stringtable == "":
            return False
        elif re.match(r'^(yes|y|no|n)$', stringtable, re.IGNORECASE):
            return stringtable.lower() in ['yes', 'y']
        else:
            print("Invalid input. Please enter 'yes' or 'no'.")

def validate_path(comp_name):
    # Validate the path to ensure it does not already exist in the addons folder
    # If it does exist, pass an exception back to the caller
    path = os.path.join("addons", comp_name)
    if os.path.exists(path):
        raise Exception(f"Path {path} already exists. Please choose a different component name.")

def write_pboprefix(comp_name):
    # Write the $PBOPREFIX$ file to the component folder
    # Format: [...]\addon-root\addons\comp_name (no driveletter, no leading slash, no trailing slash)
    # pass exception back to the caller if the file cannot be written
    path = os.path.join("addons", comp_name, "$PBOPREFIX$")
    cwd_path = os.getcwd().split('\\')
    # drop the drive letter and add backslashes to the path for the include statements
    cwd_path = '\\'.join(cwd_path[1:])
    abs_path = os.path.join(cwd_path, "addons", comp_name)
    try:
        with open(path, "w") as f:
            f.write(f"{abs_path}\n")
    except Exception as e:
        print(f"Error writing $PBOPREFIX$ file: {e}")
        raise
def write_scriptcomponent(comp_name, beautified_name):
    """
    Format:
    #define COMPONENT comp_name
    #define COMPONENT_BEAUTIFIED beautified_name
    #include "\\[...]\\addon-root\\addons\\main\\script_mod.hpp"
    // #define DEBUG_MODE_FULL
    // #define DEBUG_COMPILE_CACHE
    // #define ENABLE_PERFORMANCE_COUNTERS
    #ifdef DEBUG_ENABLED_COMPONENTUPPERCASE
        #define DEBUG_MODE_FULL
    #endif
    #ifdef DEBUG_SETTINGS_COMPONENTUPPERCASE
        #define DEBUG_SETTINGS DEBUG_SETTINGS_COMPONENTUPPERCASE
    #endif
    #include "\\[...]\\addon-root\\addons\\main\\script_mod.hpp"
    """
    # Write the script_component.hpp file to the component folder
    # pass exception back to the caller if the file cannot be written
    path = os.path.join("addons", comp_name, "script_component.hpp")
    # drop the drive letter and add backslashes to the path for the include statements
    abs_path = os.path.join('\\' + '\\'.join(os.getcwd().split('\\')[1:]), "addons", "main", "script_mod.hpp")
    try:
        with open(path, "w") as f:
            f.write(f"#define COMPONENT {comp_name}\n")
            f.write(f"#define COMPONENT_BEAUTIFIED {beautified_name}\n")
            f.write(f'#include "{abs_path}"\n')
            f.write("// #define DEBUG_MODE_FULL\n")
            f.write("// #define DEBUG_COMPILE_CACHE\n")
            f.write("// #define ENABLE_PERFORMANCE_COUNTERS\n")
            f.write(f"#ifdef DEBUG_ENABLED_{comp_name.upper()}\n")
            f.write("    #define DEBUG_MODE_FULL\n")
            f.write("#endif\n")
            f.write(f"#ifdef DEBUG_SETTINGS_{comp_name.upper()}\n")
            f.write(f"    #define DEBUG_SETTINGS DEBUG_SETTINGS_{comp_name.upper()}\n")
            f.write("#endif\n")
            f.write(f'#include "{abs_path}"\n')
    except Exception as e:
        print(f"Error writing script_component.hpp file: {e}")
        raise

def write_config(author_name,xeh_required,comp_name):
    """
    Format:
    #include "script_component.hpp"
    class CfgPatches
    {
        class ADDON
        {
            name = COMPONENT_NAME
            units[] = {};
            weapons[] = {};
            requiredVersion = REQUIRED_VERSION;
            requiredAddons[] = {};
            author = ECSTRING(main,Team);
            VERSION_CONFIG;
            authors[] = {AUTHOR_NAME};
        };
    };

    #include "CfgEventHandlers.hpp" (if xeh_required is True)
    """
    # Write the config.cpp file to the component folder
    # pass exception back to the caller if the file cannot be written
    path = os.path.join("addons", comp_name, "config.cpp")
    try:
        with open(path, "w") as f:
            f.write('#include "script_component.hpp"\n')
            f.write("class CfgPatches\n")
            f.write("{\n")
            f.write("    class ADDON\n")
            f.write("    {\n")
            f.write("        name = COMPONENT_NAME;\n")
            f.write("        units[] = {};\n")
            f.write("        weapons[] = {};\n")
            f.write("        requiredVersion = REQUIRED_VERSION;\n")
            f.write("        requiredAddons[] = {};\n")
            f.write(f"        author = ECSTRING(main,Team);\n")
            f.write("        VERSION_CONFIG;\n")
            f.write(f'        authors[] = {{"{author_name}"}};\n')
            f.write("    };\n")
            f.write("};\n\n")
            if xeh_required:
                f.write('#include "CfgEventHandlers.hpp"\n')
    except Exception as e:
        print(f"Error writing config.cpp file: {e}")
        raise

def write_stringtable(comp_name):
    """
    Format:
    <?xml version="1.0" encoding="utf-8"?>
    <Project name="gerrng">
        <Package name="comp_name">
        </Package>
    </Project>
    """
    # Write the stringtable.xml file to the component folder
    # pass exception back to the caller if the file cannot be written
    path = os.path.join("addons", comp_name, "stringtable.xml")
    try:
        with open(path, "w") as f:
            f.write('<?xml version="1.0" encoding="utf-8"?>\n')
            f.write('<Project name="gerrng">\n')
            f.write(f'    <Package name="{comp_name}">\n')
            f.write('    </Package>\n')
            f.write('</Project>\n')
    except Exception as e:
        print(f"Error writing stringtable.xml file: {e}")
        raise

def write_xeh_files(comp_name):
    # Write XEH_postInit.sqf
    # Write XEH_preInit.sqf
    # Write XEH_PREP.sqf
    # Write XEH_preStart.sqf
    # Write CfgEventHandlers.hpp
    # Write functions folder
    # pass exception back to the caller if the file cannot be written

    try:
        # Write XEH_postInit.sqf
        path = os.path.join("addons", comp_name, "XEH_postInit.sqf")
        with open(path, "w") as f:
            f.write('#include "script_component.hpp"\n')
    except Exception as e:
        print(f"Error writing XEH_postInit.sqf file: {e}")
        raise

    try:
        # Write XEH_preInit.sqf
        path = os.path.join("addons", comp_name, "XEH_preInit.sqf")
        with open(path, "w") as f:
            f.write('#include "script_component.hpp"\n\n')
            f.write('ADDON = false;\n\n')
            f.write('PREP_RECOMPILE_START;\n')
            f.write('#include "XEH_PREP.sqf"\n')
            f.write('PREP_RECOMPILE_END;\n\n\n')
            f.write('ADDON = true;\n')
    except Exception as e:
        print(f"Error writing XEH_preInit.sqf file: {e}")
        raise

    try:
        # Write XEH_PREP.sqf
        path = os.path.join("addons", comp_name, "XEH_PREP.sqf")
        with open(path, "w") as f:
            f.write('\n')
    except Exception as e:
        print(f"Error writing XEH_PREP.sqf file: {e}")
        raise

    try:
        # Write XEH_preStart.sqf
        path = os.path.join("addons", comp_name, "XEH_preStart.sqf")
        with open(path, "w") as f:
            f.write('#include "script_component.hpp"\n\n')
            f.write('#include "XEH_PREP.sqf"\n')
    except Exception as e:
        print(f"Error writing XEH_preStart.sqf file: {e}")
        raise

    try:
        # Write CfgEventHandlers.hpp
        path = os.path.join("addons", comp_name, "CfgEventHandlers.hpp")
        with open(path, "w") as f:
            f.write('class Extended_PreStart_EventHandlers {\n')
            f.write('    class ADDON {\n')
            f.write('        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));\n')
            f.write('    };\n')
            f.write('};\n\n')

            f.write('class Extended_PreInit_EventHandlers {\n')
            f.write('    class ADDON {\n')
            f.write('        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));\n')
            f.write('    };\n')
            f.write('};\n\n')

            f.write('class Extended_PostInit_EventHandlers {\n')
            f.write('    class ADDON {\n')
            f.write('        init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));\n')
            f.write('    };\n')
            f.write('};\n')
    except Exception as e:
        print(f"Error writing CfgEventHandlers.hpp file: {e}")
        raise

    try:
        # Write functions folder
        path = os.path.join("addons", comp_name, "functions")
        os.makedirs(path, exist_ok=True)
    except Exception as e:
        print(f"Error creating functions folder: {e}")
        raise

def write_data_folder(comp_name):
    # Write data folder
    # pass exception back to the caller if the file cannot be written
    try:
        path = os.path.join("addons", comp_name, "data")
        os.makedirs(path, exist_ok=True)
    except Exception as e:
        print(f"Error creating data folder: {e}")
        raise

def create_component_folder(comp_name):
    # Create the component folder in the addons folder
    # pass exception back to the caller if the folder cannot be created
    try:
        path = os.path.join("addons", comp_name)
        os.makedirs(path, exist_ok=True)
    except Exception as e:
        print(f"Error creating component folder: {e}")
        raise

def get_valid_component_names():
    while True:
        comp_name, beautified_name = prompt_comp_name()
        try:
            validate_path(comp_name)
        except Exception as e:
            print(e)
            print("Please try again.\n")
        else:
            return comp_name, beautified_name


def create_component(comp_name, beautified_name, author_name, xeh_required, data_folder_required, stringtable_required):
    # check if the path already exists, reprompt the user for a new component name if it does


    try:
        create_component_folder(comp_name)
    except Exception as e:
        print(e)
        return
    
    try:
        write_pboprefix(comp_name)
    except Exception as e:
        print(e)
        return
    
    try:
        write_scriptcomponent(comp_name, beautified_name)
    except Exception as e:
        print(e)
        return
    
    try:
        write_config(author_name, xeh_required, comp_name)
    except Exception as e:
        print(e)
        return
    
    if xeh_required:
        try:
            write_xeh_files(comp_name)
        except Exception as e:
            print(e)
            return
    if data_folder_required:
        try:
            write_data_folder(comp_name)
        except Exception as e:
            print(e)
            return
    if stringtable_required:
        try:
            write_stringtable(comp_name)
        except Exception as e:
            print(e)
            return
    
if __name__ == "__main__":
    comp_name, beautified_name = get_valid_component_names()
    author_name = prompt_author_name()
    xeh_required = prompt_xeh_required()
    data_folder = prompt_data_folder_required()
    stringtable_required = prompt_stringtable_required()

    create_component(comp_name, beautified_name, author_name, xeh_required, data_folder, stringtable_required)


    
        


