CC = gcc

CFLAGS = -Wall -Wextra \
		 -I. \
		 -I./HAL_Buttons \
		 -I./HAL_Sensors \
		 -I./HAL_Actuators \
		 -I./SPWS_Controller \

OBJ = main.o \
	  HAL_Buttons/hal_buttons.o \
	  HAL_Sensors/hal_sensors.o \
	  HAL_Actuators/hal_actuators.o \
	  SPWS_Controller/spws_controller.o

all: main

main: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f main $(OBJ)
