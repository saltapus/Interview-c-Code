#Author: Anthony Cameron
#Date Modified: 10/01/2021

CC = gcc
CFLAGS = -Wall -pedantic -ansi -g
OBJ = Factorial.o
EXEC = Factorial 

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

FibonacciSeries.o : Factorial.c Factorial.h
	$(CC) -c Factorial.c $(CFLAGS)

clean:
	Del $(OBJ) $(EXEC)

runVal:
	valgrind ./$(EXEC)