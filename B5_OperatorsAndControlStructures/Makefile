CC = gcc

CFLAGS = -Wall -Wextra -std=c99

SRCS = main.c \
	  led_driver.c

OBJ = $(SRCS:.c=.o)
ASM = $(SRCS:.c=.s)
PRE = $(SRCS:.c=.i)

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
