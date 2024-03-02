#!/bin/bash

# Function to find all .cpp files recursively, excluding the "Codeforces" folder
find_cpp_files() {
    find . -type d -name 'Codeforces' -prune -o -type f -name '*.cpp' -print
}

# Generate Makefile
generate_makefile() {
    echo "all:"
    for file in $(find_cpp_files); do
        filename=$(basename "$file")
        filename_no_ext="${filename%.*}"
        echo -e "\tg++ $file -o ${file%/*}/$filename_no_ext.out"
    done

    echo -e "\ncheck:"
    for file in $(find_cpp_files); do
        filename=$(basename "$file")
        filename_no_ext="${filename%.*}"
        echo -e "\t${file%/*}/$filename_no_ext.out"
    done

    echo -e "\nclean:"
    echo -e "\trm -f ./**/*.out\n"

    echo -e "distcheck:"
    echo -e "\tmake clean"
}

# Generate Makefile
generate_makefile > Makefile
