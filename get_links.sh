# Directory containing the folders
parent_dir="output"

# Output directory

# Loop through each folder in the parent directory
for folder in "output"/*/; do
    # Extract the folder name without the trailing slash
    folder_name=$(basename "$folder")

    # Path to the index.html file in the output directory
    index_file="output/$folder_name/index.html"

    # Check if the index.html file exists
    echo "file://///wsl$/Ubuntu-22.04/home/matistjati/kattis/mdtest/$index_file"
done