let releases = HEMTT_RFS.join("releases");


let dst = HEMTT_RFS.join(".hemttout").join("@" + HEMTT.project().name());

if dst.is_dir() {
    print("Clearing " + dst);
    if !dst.remove_dir_all() {
        fatal("Failed to remove " + dst);
    }
}

print("Renaming to " + dst);

if !releases.move(dst) {
    fatal("Failed to move " + releases + " to " + dst);

}

let extra_files = releases.list();
print(extra_files);

for file in extra_files {
    file.move(dst);
}