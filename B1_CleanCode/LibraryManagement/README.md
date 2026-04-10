# LibraryManagement 

---

**1. What – Dự án là gì?**

---

Đây là ứng dụng console quản lý thư viện viết bằng C:

- Thêm - xoá - sửa - tìm kiếm sách. 
- Quản lý người dùng. 
- Lưu/đọc dữ liệu.

---

**2. Why – Tại sao làm?**

Mục tiêu của dự án là để học và thực hành:

- **Quản lý mã nguồn:** Tổ chức code theo module.
- **I/O trong C:** Đọc/ghi dữ liệu từ file.
- **Nguyên tắc Clean Code:** Viết code rõ ràng, có cấu trúc.

---

**3. Who – Ai thực hiện?**

- **Tác giả:** Dương Trung Hiền
- **Vai trò:** Sinh viên kỹ thuật / Embedded developer

---

**4. When – Thời gian?**

- **Bắt đầu:** 3/2026
- **Phiên bản:** v1.0 
- **Trạng thái:** Hoàn thiện bản cơ bản

---

**5. Where – Ứng dụng ở đâu?**

- **Môi trường:**  Linux / Windows có hỗ trợ `gcc`.
- Dùng trong các bài học về quản lý hệ thống, debug, hoặc kiểm thử hệ thống.

---

**6. How – Cách sử dụng**

Thực hiện trong thư mục `B1_CleanCode/LibraryManagement`:

```bash
cd B1_CleanCode/LibraryManagement

# Build bằng Makefile (nếu có)
make

# Hoặc biên dịch thủ công :
gcc -o library main.c Book/book.c Management/management.c Ultils/ultils.c User/user.c

# Run
./library
```

---

