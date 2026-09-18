#!/bin/bash
# Cach dung: ./scripts/new_practice.sh 800 4A
#   800 = rating cua bai (thu muc chua)
#   4A  = ma bai tren Codeforces (vi du 4A, 1A, 158B...)
#
# Tao file: practice/800/4A.cpp

if [ -z "$1" ] || [ -z "$2" ]; then
  echo "Thieu tham so. Vi du: ./scripts/new_practice.sh 800 4A"
  exit 1
fi

RATING="$1"
PROBLEM="$2"

DIR="practice/$RATING"
mkdir -p "$DIR"

FILE="$DIR/$PROBLEM.cpp"

if [ -f "$FILE" ]; then
  echo "File da ton tai: $FILE"
else
  cp solutions/_template/template.cpp "$FILE"
  echo "Da tao $FILE"
fi

echo ""
echo "Bat dau luyen tap: $FILE"
