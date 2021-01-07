#Author: Anthony Cameron
#Date Modified: 06/01/202

CC = gcc
CFLAGS = -Wall -pedantic -ansi -g
OBJ = PrimeNumber.o
EXEC = PrimeNumber 

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

FibonacciSeries.o : PrimeNumber.c PrimeNumber.h
	$(CC) -c PrimeNumber.c $(CFLAGS)

clean:
	Del $(OBJ) $(EXEC)

runVal:
	valgrind ./$(EXEC)
