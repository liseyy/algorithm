CC=gcc

popsobj=pops.o comm.o
pop=pops

shellobj=shells.o comm.o
shell=shells

quickobj=quicks.o comm.o
quick=quicks

selectobj=selects.o comm.o
select=selects

insertobj=inserts.o comm.o
insert=inserts

heapobj=heaps.o comm.o
heap=heaps

mergeobj=merges.o comm.o
merge=merges

all: $(pop) $(shell) $(quick) $(select) $(insert) $(heap) $(merge)

$(pop): $(popsobj)
	$(CC) -o $(pop) $(popsobj)

$(shell): $(shellobj)
	$(CC) -o $(shell) $(shellobj)

$(quick): $(quickobj)
	$(CC) -o $(quick) $(quickobj)

$(select): $(selectobj)
	$(CC) -o $(select) $(selectobj)

$(insert): $(insertobj)
	$(CC) -o $(insert) $(insertobj)

$(heap): $(heapobj)
	$(CC) -o $(heap) $(heapobj)

$(merge): $(mergeobj)
	$(CC) -o $(merge) $(mergeobj)

comm.o: comm.c comm.h

.PHONY: clean
clean:
	rm -rf $(pop) $(shell) $(quick) $(select) $(insert) $(heap) $(merge) *.o

