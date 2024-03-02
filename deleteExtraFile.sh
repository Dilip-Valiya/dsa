#!/bin/bash

# Check if an argument is provided
if [ $# -ne 1 ]; then
    echo "Usage: $0 <folder_path>"
    exit 1
fi

# Navigate to the specified directory
cd "$1" || { echo "Directory not found"; exit 1; }

# Remove .out files recursively
find . -type f -name "*.out" -delete

