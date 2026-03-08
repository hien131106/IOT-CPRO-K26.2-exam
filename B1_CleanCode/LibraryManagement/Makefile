CC = gcc

CFLAGS = -Wall -Wextra -I./Book -I./Management -I./Ultils -I./User

SRC = main.c \
      Book/book.c \
      Management/management.c \
      Ultils/ultils.c \
      User/user.c

OBJ = $(SRC:.c=.o)
ASM = $(SRC:.c=.s)
PRE = $(SRC:.c=.i)

TARGET = library_management


all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)


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