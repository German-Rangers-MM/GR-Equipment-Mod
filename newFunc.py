import os
import re

'''
This module provides a function to add new SQF-Functions and prep them with CBA XEH.

The User can specify if the function has parameters, the amount of parameters and for each of the parameters their respective names and optional default values.

The Process will be a interactive guided CLI with prompts for the inputs as needed.

Usage:
    Step 1: Allowing the user to select the addon from the addons folder from all folders, which have a XEH_Prep.hpp file
    Step 2: Prompting the user for the function name, which gets turned into the filename (with fnc_ prefix and .sqf suffix)
    Step 3: Asking the user how many parameters the function should have (0-n)
    Step 4: For each parameter, asking the user for the parameter name and if it should have a default value, if so, prompting for the default value
    Step 5: Generating the function file in the correct addons functions folder with the appropriate content.
    Step 6: Updating the XEH_Prep.hpp file to include the new function (writing PREP(functionName); to an new line in the XEH_Prep.hpp file)
'''
def get_addons_with_xeh_prep():
    """Find all addon folders that have a XEH_Prep.hpp file"""
    addons = []
    
    if not os.path.exists('addons'):
        print("Error: 'addons' folder not found in current directory!")
        return []
    
    for folder in os.listdir('addons'):
        folder_path = os.path.join('addons', folder)
        if os.path.isdir(folder_path):
            xeh_prep_path = os.path.join(folder_path, 'XEH_Prep.hpp')
            if os.path.exists(xeh_prep_path):
                addons.append(folder)
    
    return sorted(addons)

def select_addon():
    """Let user select an addon from available options"""
    addons = get_addons_with_xeh_prep()
    
    if not addons:
        print("No addons with XEH_Prep.hpp found!")
        return None
    
    print("\nAvailable addons:")
    for i, addon in enumerate(addons, 1):
        print(f"  {i}. {addon}")
    
    while True:
        try:
            choice = int(input(f"\nSelect addon (1-{len(addons)}): "))
            if 1 <= choice <= len(addons):
                return addons[choice - 1]
            else:
                print(f"Please enter a number between 1 and {len(addons)}")
        except ValueError:
            print("Please enter a valid number!")

def get_function_name():
    """Get and validate function name from user"""
    while True:
        func_name = input("\nEnter function name (without 'fnc_' prefix): ").strip()
        
        if not func_name:
            print("Function name cannot be empty!")
            continue
            
        # Validate function name (alphanumeric and underscores)
        if not re.match(r'^[a-zA-Z_][a-zA-Z0-9_]*$', func_name):
            print("Function name can only contain letters, numbers and underscores!")
            continue
            
        # Check if function file already exists
        if any(os.path.exists(os.path.join('addons', addon, f'fnc_{func_name}.sqf')) 
               for addon in get_addons_with_xeh_prep()):
            print(f"Function 'fnc_{func_name}.sqf' already exists in one of the addons!")
            continue
            
        return func_name

def get_parameters():
    """Get parameter information from user"""
    while True:
        try:
            num_params = int(input("\nHow many parameters should the function have? (0-n): "))
            if num_params >= 0:
                break
            else:
                print("Please enter a non-negative number!")
        except ValueError:
            print("Please enter a valid number!")
    
    parameters = []
    
    for i in range(num_params):
        print(f"\nParameter {i + 1}:")
        
        # Get parameter name
        while True:
            param_name = input("  Parameter name: ").strip()
            if param_name and re.match(r'^[a-zA-Z_][a-zA-Z0-9_]*$', param_name):
                # Ensure parameter starts with underscore (common SQF convention)
                if not param_name.startswith('_'):
                    param_name = '_' + param_name
                break
            else:
                print("  Parameter name can only contain letters, numbers and underscores!")
        
        # Ask for default value
        has_default = input("  Does this parameter have a default value? (y/N): ").strip().lower()
        default_value = None
        
        if has_default in ('y', 'yes'):
            default_value = input("  Enter default value: ").strip()
        
        parameters.append({
            'name': param_name,
            'default': default_value
        })
    
    return parameters

def get_return_type():
    """Get return type information from user"""
    if input("\nDoes this function have a return value? (y/N): ").strip().lower() not in ('y', 'yes'):
        return "None"
    return_type = input("\nEnter return type (optional, e.g. BOOL, NUMBER, STRING. if nothing is entered the type will be ANY): ").strip()
    return return_type if return_type else "ANY"

def generate_sqf_content(func_name, parameters, return_type):
    """Generate the SQF function content"""
    
    def infer_sqf_type(default_value):
        """Infer SQF type from default value"""
        if default_value is None:
            return "ANY"
        
        val = default_value.strip()
        
        # Check for common SQF literals
        if val in ('objNull', 'controlNull', 'teamMemberNull', 'displayNull', 'locationNull'):
            return "OBJECT"
        if val == 'taskNull':
            return "TASK"
        if val == 'configNull':
            return "CONFIG"
        if val == 'grpNull':
            return "GROUP"
        if val in ('true', 'false'):
            return "BOOL"
        if val.startswith('"') and val.endswith('"'):
            return "STRING"
        if val.startswith("'") and val.endswith("'"):
            return "STRING"
        if val == '[]':
            return "ARRAY/HASHMAP"
        if val == '{}':
            return "CODE"
        if re.match(r'^-?\d+(\.\d+)?$', val):
            return "NUMBER"
        
        # Default fallback
        return "ANY"
    
    # Function header with basic documentation
    content = "#include \"..\\script_component.hpp\"\n\n"
    content += "/*\n"
    content += f"    Function: {func_name}\n"
    content += "    \n"
    content += "    Description:\n"
    content += "        [Enter function description here]\n"
    content += "    \n"
    
    i = 0
    if parameters:
        content += "    Parameters:\n"
        for param in parameters:
            param_type = infer_sqf_type(param['default'])
            default_info = f" (default: {param['default']})" if param['default'] is not None else ""
            content += f"        {i}: {param['name']} <{param_type}{default_info}>\n"
            i += 1
        content += "    \n"
    
    content += "    Return:\n"
    if return_type.lower() != "none":
        content += f"        <{return_type}> - [Return description]\n"
    else:
        content += "        None\n"
    content += "*/\n\n"
    
    # Function definition
    if parameters:
        # Build params array
        params_array = []
        for param in parameters:
            if param['default'] is not None:
                params_array.append(f'["{param["name"]}", {param["default"]}]')
            else:
                params_array.append(f'"{param["name"]}"')
        
        content += f"params [{', '.join(params_array)}];\n\n"
    
    # Function body placeholder
    content += "// TODO: Implement function logic\n"
    
    return content

def update_xeh_prep(addon_name, func_name):
    """Update XEH_Prep.hpp file with new function"""
    xeh_prep_path = os.path.join('addons', addon_name, 'XEH_Prep.hpp')
    
    prep_line = f"\nPREP({func_name});\n"
    
    try:
        # Read existing content
        with open(xeh_prep_path, 'r') as f:
            content = f.readlines()
        
        # Check if the PREP line already exists
        if any(prep_line.strip() in line for line in content):
            print(f"  Note: PREP({func_name}) already exists in XEH_Prep.hpp")
            return
        
        # Add the PREP line
        content.append(prep_line)
        
        # Write back
        with open(xeh_prep_path, 'w') as f:
            f.writelines(content)
        
        print(f"  ✓ Added PREP({func_name}) to XEH_Prep.hpp")
        
    except Exception as e:
        print(f"  ✗ Error updating XEH_Prep.hpp: {e}")

def create_new_function():
    """Main function to guide user through creating a new SQF function"""
    print("=== New SQF Function Creator ===\n")
    
    # Step 1: Select addon
    print("Step 1: Select target addon")
    addon_name = select_addon()
    if not addon_name:
        return
    
    # Step 2: Get function name
    print("\nStep 2: Function name")
    func_name = get_function_name()
    file_name = f"fnc_{func_name}.sqf"
    
    # Step 3: Get parameters
    print("\nStep 3: Function parameters")
    parameters = get_parameters()

    # Step 4: Get return type (optional)
    return_type = get_return_type()

    
    # Step 5: Generate function content
    print("\nStep 5: Generating function file...")
    sqf_content = generate_sqf_content(func_name, parameters, return_type)
    
    # Step 6: Create function file
    func_path = os.path.join('addons', addon_name, 'functions', file_name)
    
    try:
        with open(func_path, 'w') as f:
            f.write(sqf_content)
        print(f"  ✓ Created function file: {file_name}")
    except Exception as e:
        print(f"  ✗ Error creating function file: {e}")
        return
    
    # Step 7: Update XEH_Prep.hpp
    print("\nStep 7: Updating XEH_Prep.hpp...")
    update_xeh_prep(addon_name, func_name)
    
    # Summary
    print(f"\n=== Summary ===")
    print(f"Addon: {addon_name}")
    print(f"Function: {func_name}")
    print(f"File: {file_name}")
    print(f"Parameters: {len(parameters)}")
    print(f"Return Type: {return_type}")
    print(f"\nFunction created successfully!")
    print(f"Remember to implement the actual function logic in: {func_path}")

if __name__ == "__main__":
    try:
        create_new_function()
    except KeyboardInterrupt:
        print("\n\nOperation cancelled by user.")
    except Exception as e:
        print(f"\nAn unexpected error occurred: {e}")