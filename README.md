# CP Environment (C++)

Môi trường competitive programming, chạy được trên GitHub Codespaces từ bất kỳ thiết bị nào chỉ cần trình duyệt.

## Cách dùng lần đầu

1. Tạo repo mới trên GitHub (ví dụ: `cp-solutions`), để **private** nếu muốn.
2. Đẩy toàn bộ nội dung thư mục này lên repo đó:
   ```bash
   git init
   git add .
   git commit -m "cp environment setup"
   git branch -M main
   git remote add origin https://github.com/<username>/cp-solutions.git
   git push -u origin main
   ```

## Cách mở trên máy bất kỳ (không cần cài gì)

1. Vào repo trên GitHub → nút xanh **Code** → tab **Codespaces** → **Create codespace on main**.
2. Đợi ~1-2 phút để môi trường build lần đầu (các lần sau mở lại nhanh hơn nhiều).
3. VS Code mở ngay trên trình duyệt, đã có sẵn compiler C++ (GCC) + extension.

## Cách code & chạy bài

1. Copy `solutions/template.cpp` thành file mới, ví dụ `solutions/1234A.cpp`.
2. Viết code trong hàm `solve()`.
3. Nhấn `Cmd+Shift+B` (hoặc `Ctrl+Shift+B`) để build & chạy — hoặc dùng nút ▶️ (Code Runner) góc trên phải.
4. Nhập input trực tiếp vào terminal khi chương trình chạy, `Ctrl+D` để kết thúc input (giả lập EOF).

## Lưu ý

- Free tier Codespaces: ~60-120 giờ/tháng tùy loại máy — đủ dùng cho luyện tập thông thường.
- Mọi thay đổi tự động lưu trong container, nhớ `git commit` + `git push` định kỳ để không mất bài khi container bị xoá do không dùng lâu.
- Khi quen tay và lên tier cao hơn, có thể nâng cấp thêm: tool tự động parse test case (Competitive Companion), stress testing script, hoặc debug template nâng cao.
