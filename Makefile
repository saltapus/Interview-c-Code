#Author: Anthony Cameron
#Date Modified: 06/01/202

CC = gcc
CFLAGS = -Wall -pedantic -ansi -g
OBJ = FibonacciSeries.o
EXEC = Fibonacci_Series

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

FibonacciSeries.o : FibonacciSeries.c FibonacciSeries.h
	$(CC) -c FibonacciSeries.c $(CFLAGS)

clean:
	rm -rf $(OBJ) $(EXEC)

runVal:
	valgrind ./$(EXEC)cho~
