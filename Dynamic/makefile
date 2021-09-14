CC=gcc
CFLAGS=-c -fpic

all: add sub print

%.o:%.c
	$(CC) $(CFLAGS) -o $^

clean:
	rm -rf *.o add sub print
