CC=gcc

binaryobj=binary.o comm.o
binary=binary


all: $(binary)

$(binary): $(binaryobj)
	$(CC) -o $(binary) $(binaryobj)


comm.o: comm.c comm.h

.PHONY: clean
clean:
	rm -rf $(binary) *.o

