# LED Strip Driver (WS2812B Simulation)

# **1. What – Dự án là gì?**

Đây là một driver phần mềm mô phỏng việc điều khiển dải LED RGB địa chỉ hóa (WS2812B / NeoPixel):
- Quản lý **buffer dữ liệu** màu cho toàn bộ dải LED.
- Mỗi LED được biểu diễn bằng 1 **giá trị 32-bit** (định dạng GRB).
- Cung cấp các API để **set** màu từng LED, **fill** toàn bộ dải, và **clear**.

---

# **2. Why – Tại sao làm?**

Mục tiêu của dự án là để học và thực hành:

- **Quản lý bộ nhớ động:** Sử dụng malloc/free trong C.
- **Thao tác bit (Bitwise):** Đóng gói dữ liệu màu theo chuẩn GRB.
- **Thiết kế driver:** Tách biệt API (.h) và implementation (.c).
- **Nguyên tắc Encapsulation:** Ẩn buffer, chỉ truy cập qua function.

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
- Dùng trong học tập Embedded C, đặc biệt: **Driver design**, **Bit manipulation** và **Memory management**

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

