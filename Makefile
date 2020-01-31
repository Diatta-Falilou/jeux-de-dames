CC=gcc
SRC= header.c main.c
OBJ=$(SRC:.c=.o)
FLAGS=-Wall

all:	$(OBJ) header.h
	$(CC) -o $@ $(OBJ)
%.o:	%.c
	$(CC) -c $< $(CFLAGS)

clean:
	rm -rf *.o core all
