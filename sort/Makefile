CC=gcc

popsobj=pops.o comm.o
pop=pops

shellobj=shells.o comm.o
shell=shells

quickobj=quicks.o comm.o
quick=quicks

all: $(pop) $(shell) $(quick)

$(pop): $(popsobj)
	$(CC) -o $(pop) $(popsobj)

$(shell): $(shellobj)
	$(CC) -o $(shell) $(shellobj)

$(quick): $(quickobj)
	$(CC) -o $(quick) $(quickobj)

pops.o: pops.c comm.h
comm.o: comm.c comm.h

.PHONY: clean
clean:
	rm -rf $(pop) $(shell) $(quick) *.o
