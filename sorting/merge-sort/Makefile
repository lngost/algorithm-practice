CC=clang -std=c99
CFLAGS=-c
SOURCES=main.c merge-sort.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=run

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@
	
.c.o:
	$(CC) $(CFLAGS) $< -o $@
	
clean:
	rm $(OBJECTS)

clean-all:
	rm $(EXECUTABLE) $(OBJECTS)

