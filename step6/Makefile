PROG = queuetest2
OBJS = queue.o queuetest2.o 
LIBS =

CFLAGS = -Wall -pedantic -std=c11 -ggdb -I.-g
CC = gcc
MAKE = make

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $^ $(LIBS) -o $@

queue.o: queue.h 
queuetest2.o: queue.h

clean:
	rm -rf *.dSYM 
	rm -f *~ *.o
	rm -f $(PROG)
