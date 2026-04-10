# LibraryManagement (B1_CleanCode)
# LibraryManagement (B1_CleanCode)

---

1. What – Dự án là gì?

Đây là ứng dụng console quản lý thư viện viết bằng C, minh hoạ phân tách module theo `Book`, `Management`, `User`, `Ultils`.

- **Chức năng chính:** Thêm / Xoá / Sửa / Tìm kiếm sách; quản lý người dùng; lưu/đọc dữ liệu.

---

2. Why – Tại sao làm?

Mục tiêu của dự án là để học và thực hành:

- **Quản lý mã nguồn:** Tổ chức code theo module.
- **I/O trong C:** Đọc/ghi dữ liệu từ file.
- **Nguyên tắc Clean Code:** Viết code rõ ràng, có cấu trúc.

---

3. Who – Ai thực hiện?

- **Tác giả:** (tên bạn)
- **Đối tượng:** Sinh viên, người học lập trình C.

---

4. When – Trạng thái / Phiên bản

- **Trạng thái:** Bài tập/đồ án B1 — cơ bản/hoàn thành (tuỳ chỉnh theo thực tế).
- **Phiên bản:** v1.0 (cập nhật khi có thay đổi lớn).

---

5. Where – Môi trường chạy

- **Hệ điều hành:** Linux (hoặc hệ tương thích với `gcc`).
- **File khởi chạy chính:** [main.c](B1_CleanCode/LibraryManagement/main.c)
- **Makefile:** [Makefile](B1_CleanCode/LibraryManagement/Makefile)

---

6. How – Hướng dẫn build & run

Thực hiện trong thư mục `B1_CleanCode/LibraryManagement`:

```bash
cd B1_CleanCode/LibraryManagement

# Build bằng Makefile (nếu có)
make

# Hoặc biên dịch thủ công (ví dụ):
gcc -o library main.c Book/book.c Management/management.c Ultils/ultils.c User/user.c

# Chạy
./library
```

---

File structure (tóm tắt):

- [main.c](B1_CleanCode/LibraryManagement/main.c)
- [Makefile](B1_CleanCode/LibraryManagement/Makefile)
- [Book/](B1_CleanCode/LibraryManagement/Book/) — `book.c`, `book.h`
- [Management/](B1_CleanCode/LibraryManagement/Management/) — `management.c`, `management.h`
- [Ultils/](B1_CleanCode/LibraryManagement/Ultils/) — `ultils.c`, `ultils.h`
- [User/](B1_CleanCode/LibraryManagement/User/) — `user.c`, `user.h`

---

Usage example (ngắn):

- Khi chạy chương trình, chọn menu `Add Book` → nhập tiêu đề, tác giả, mã sách.
- Tìm kiếm sách: chọn `Search` → nhập từ khoá.

---

Ghi chú & Troubleshooting:

- **Lỗi biên dịch:** Kiểm tra include path và thứ tự file khi gọi `gcc`.
- **Thiếu file dữ liệu:** Đảm bảo file dữ liệu (nếu có) nằm trong thư mục chạy.

---

Contributing:

- Fork repo → tạo branch → chỉnh sửa → gửi Pull Request. Mô tả cách test.

---

License / Contact:

- Thêm thông tin license hoặc email liên hệ nếu cần.

---

Nếu bạn muốn mình thay đổi văn bản cụ thể (ví dụ: đổi tiêu đề, thêm ví dụ I/O), cho mình nội dung hoặc đầu ra mẫu để mình chèn vào.
