CC=gcc
CFLAGS=-I.
DEPS=gui.h mazzo.h follower.h player.h tipi.h gui.h
OBJ=main.o mazzo.o player.c gui.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJ)
	gcc -o a.out $^ $(CFLAGS)

run:
	./a.out
