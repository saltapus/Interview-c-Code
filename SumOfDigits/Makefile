#Author: Anthony Cameron
#Date Modified: 010/01/2021

CC = gcc
CFLAGS = -Wall -pedantic -ansi -g
OBJ = SumOfDigits.o
EXEC = SumOfDigits 

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

FibonacciSeries.o : SumOfDigits.c SumOfDigits.h
	$(CC) -c SumOfDigits.c $(CFLAGS)

clean:
	Del $(OBJ) $(EXEC)

runVal:
	valgrind ./$(EXEC)
