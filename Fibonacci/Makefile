#Author: Anthony Cameron
#Date Modified: 06/01/202

CC = gcc
CFLAGS = -Wall -pedantic -ansi -g
OBJ = FibonacciSeries.o
EXEC = FibonacciSeries

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

FibonacciSeries.o : FibonacciSeries.c FibonacciSeries.h
	$(CC) -c FibonacciSeries.c $(CFLAGS)

clean:
	Del $(OBJ) $(EXEC)

runVal:
	valgrind ./$(EXEC)