#!/bin/bash
# Cach dung: ./scripts/sync.sh "them bai 1122div3 A B C"
# Tu dong add + commit + push toan bo thay doi len GitHub

MSG="${1:-cap nhat bai lam}"

git add .
git commit -m "$MSG"
git push

echo ""
echo "Da dong bo len GitHub."
