CC = gcc

CFLAGS = -Wall -Wextra \
		-I. \
		-I./HAL_Buttons \
		-I./HAL_Sensors \
		-I./HAL_Actuators \
		-I./SPWS_Controller

SRC = main.c \
      HAL_Buttons/hal_buttons.c \
      HAL_Sensors/hal_sensors.c \
      HAL_Actuators/hal_actuators.c \
      SPWS_Controller/spws_controller.c

OBJ = $(SRC:.c=.o)
ASM = $(SRC:.c=.s)
PRE = $(SRC:.c=.i)

TARGET = main

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)


# compile -> object
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


# compile -> assembly
asm: $(ASM)

%.s: %.c
	$(CC) $(CFLAGS) -S $< -o $@


# compile -> preprocessed
preprocess: $(PRE)

%.i: %.c
	$(CC) $(CFLAGS) -E $< -o $@


clean:
	rm -f $(OBJ) $(ASM) $(PRE) $(TARGET)
