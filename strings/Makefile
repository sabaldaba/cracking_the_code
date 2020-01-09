CC=gcc
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

default : build
build: 
	$(CC) $(SRCS) -o $(OBJS)


.PHONY : clean
clean:
	rm $(OBJS)
