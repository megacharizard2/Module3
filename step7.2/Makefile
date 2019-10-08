PROG = hashtest
OBJS = hashtest.o hash.o ../step6/queue.o 
LIBS =

CFLAGS = -Wall -pedantic -std=c11 -ggdb -I.-g
CC = gcc
MAKE = make

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $^ $(LIBS) -o $@

hash.o: hash.h ../step6/queue.h
hashtest.o: hash.h ../step3/list.h 

clean:
	rm -rf *.dSYM 
	rm -f *~ *.o
	rm -f $(PROG)
