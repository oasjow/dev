CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = program
SRC = main.c linked_list.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

.PHONY: clean
clean:
	rm -f $(TARGET)