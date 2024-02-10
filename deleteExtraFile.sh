#!/bin/bash

# Check if an argument is provided
if [ $# -ne 1 ]; then
    echo "Usage: $0 <folder_path>"
    exit 1
fi

# Navigate to the specified directory
cd "$1" || { echo "Directory not found"; exit 1; }

# Loop through all files in the specified directory
for file in *; do
    # Check if the file is not a directory and does not have a .cpp extension
    if [ ! -d "$file" ] && [ "${file##*.}" != "cpp" ]; then
        # Remove the file
        rm "$file"
        echo "Removed $file"
    fi
done
