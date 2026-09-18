#!/bin/bash
# Cách dùng: ./scripts/new_contest.sh 1122div3
# Tạo thư mục solutions/1122div3/ với sẵn file A.cpp -> G.cpp từ template

if [ -z "$1" ]; then
  echo "Thieu ten contest. Vi du: ./scripts/new_contest.sh 1122div3"
  exit 1
fi

DIR="solutions/$1"
mkdir -p "$DIR"

for letter in A B C D E F G; do
  FILE="$DIR/$letter.cpp"
  if [ ! -f "$FILE" ]; then
    cp solutions/_template/template.cpp "$FILE"
    echo "Da tao $FILE"
  fi
done

echo ""
echo "Xong! Thu muc: $DIR"
echo "Mo file can lam va bat dau code."
