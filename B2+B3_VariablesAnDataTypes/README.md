# Smart Plant Watering System

# **1. What – Dự án là gì?**

Đây là hệ thống mô phỏng việc quản lý tưới nước cho cây trồng:
- Mô phỏng buttons.
- Mô phỏng sensors (độ ẩm đất, nhiệt độ).
- Mô phỏng actuators (bơm, LED).

---

# **2. Why – Tại sao làm?**

Mục tiêu của dự án là để học và thực hành:

- **Quản lý mã nguồn:** Tổ chức code theo module.
- **Nguyên tắc Clean Code:** Viết code rõ ràng, có cấu trúc.
- **Struct và Enum trong C:** Thực hành sử dụng struct và enum.

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
- Dùng trong các bài học về ứng dụng biến, struct - enum, debug, hoặc kiểm thử hệ thống.

---

# **6. How – Cách sử dụng**

Thực hiện trong thư mục `B2+B3_VariablesAnDataTypes`:

```bash
cd B2+B3_VariablesAnDataTypes

# Build bằng Makefile (nếu có)
make

# Hoặc biên dịch thủ công :
gcc -Wall -Wextra \
  -I. -I./HAL_Buttons -I./HAL_Sensors -I./HAL_Actuators -I./SPWS_Controller \
  main.c HAL_Buttons/hal_buttons.c HAL_Sensors/hal_sensors.c \
  HAL_Actuators/hal_actuators.c SPWS_Controller/spws_controller.c \
  -o main

# Run
./main

# Remove file compile (object/binary)
make clean
```

---

