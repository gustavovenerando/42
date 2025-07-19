#!/bin/bash

set -euo pipefail

if [ $# -lt 2 ]; then
	echo "Error: 2 arguments are expected to run the script: clone_url(first) and dir_name(second)"
	exit 1
fi

CLONE_URL="$1"
DIR_NAME="$2"
TEMP_DIR_NAME="$2-before"

if [ ! -d "$DIR_NAME" ]; then
	echo "Error: Directory '$DIR_NAME' does not exits in the current directory."
	exit 1
fi

rm -rf "$DIR_NAME"/.git
echo "Removed .git from '$DIR_NAME'"

mv "$DIR_NAME" "$TEMP_DIR_NAME"
echo "Renamed '$DIR_NAME' to '$TEMP_DIR_NAME'"

git clone "$CLONE_URL" "$DIR_NAME"
echo "Cloned repository with name '$DIR_NAME'"

if find "$DIR_NAME" -mindepth 1 | read; then
	echo "Cloned directory has content"
	rm -rf "$DIR_NAME"/*
	echo "Contents removed from '$DIR_NAME'"
else
	echo "Cloned repository is empty. Proceeding with next steps"
fi

mv "$TEMP_DIR_NAME"/* "$DIR_NAME"/
echo "Moved files to cloned directory"

rm -rf "$TEMP_DIR_NAME" 
echo "Temp directory removed"

cd "$DIR_NAME"
echo "Changed directory to '$DIR_NAME'"

echo "Pushing main files..."
git add .
git commit -m "retry, old files"
git push

echo "Sucessfull migration"
exit 0
