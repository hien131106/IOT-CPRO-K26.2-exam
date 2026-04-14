# File Metadata Checker (filestat)

# **1. What – Dự án là gì?**

Đây là một công cụ dòng lệnh mô phỏng lệnh `stat` trên Linux, dùng để đọc và hiển thị **siêu dữ liệu (metadata)** của một tệp hoặc thư mục:
- Truy xuất thông tin thông qua system call `lstat()`.
- Hiển thị các thuộc tính cơ bản:
  - Loại tệp (Regular File, Directory, Symbolic Link)
  - Kích thước tệp
  - Thời gian sửa đổi tệp lần cuối
- Làm việc trực tiếp với cấu trúc **inode** thông qua `struct stat`.

---

# **2. Why – Tại sao làm?**

Mục tiêu của dự án là để học và thực hành:

- **System Programming (Linux)**: Làm việc với system call như `lstat()`.
- **Hiểu inode & metadata:** Cách hệ điều hành lưu thông tin file.
- **Xử lý struct từ OS:** Làm việc với `struct stat`.

---

# **3. Who – Ai thực hiện?**

- **Tác giả:** Dương Trung Hiền
- **Vai trò:** Sinh viên kỹ thuật / Embedded developer

---

# **4. When – Thời gian?**

- **Bắt đầu:** 4/2026
- **Phiên bản:** v1.0 
- **Trạng thái:** Hoàn thiện bản cơ bản

---

# **5. Where – Ứng dụng ở đâu?**

- Môi trường:  Linux / Windows có hỗ trợ `gcc`.
- Dùng trong học tập Embedded Linux, ứng dụng trong:
  - Học **System Programming**
  - Hiểu cách OS quản lý file
  - Nền tảng cho Embedded Linux / Automotive Linux

---

# **6. How – Cách sử dụng**

Thực hiện trong thư mục `B5_OperatorsAndControlStructures`:

```bash
cd B5_OperatorsAndControlStructures

# Build bằng Makefile (nếu có)
make

# Hoặc biên dịch thủ công :
gcc -Wall -Wextra -std=c99 main.c led_driver.c -o main

# Run
./main

# Remove file compile (object/binary)
make clean
```

---

