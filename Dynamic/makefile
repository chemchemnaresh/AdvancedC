CC=gcc
CFLAGS=-c -fpic

all:add sub print

%.o:%.c
	$(CC) $(CFLAGS) $^

clean:
	rm -rf *.o sum mul print
