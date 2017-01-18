CC = gcc
CFLAGS = -std=c99 -pedantic -Wal -Wextra
DEPS = readwrite.h
OBJ = hello.o readwrite.o

%.o: %.c $(DEPS)
	%(CC) -c -o $@ $< $(CFLAGS)

hello: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
 

