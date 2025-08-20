# Remove and recreate the output directory
rm -rf output
mkdir output

for folder in */; do
    if [[ "$folder" == "output/" ]]; then
        continue
    fi
    if [[ "$folder" == "interactivecommunication/" ]]; then
        continue
    fi
    if [[ "$folder" == "testing/" ]]; then
        continue
    fi
    if [[ "$folder" == "testdata_tools/" ]]; then
        continue
    fi

    echo "Processing $folder"
    mkdir output/$folder
    ../problemtools-markdown/bin/problem2html.sh $folder -d output/$folder
    folder_name="${folder%/}"
    ../problemtools-markdown/bin/problem2pdf.sh $folder -o "output/$folder_name.pdf"
done
