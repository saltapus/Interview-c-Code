#Author: Anthony Cameron
#Date Modified: 06/01/202

CC = gcc
CFLAGS = -Wall -pedantic -ansi -g
OBJ = Palindrome.o
EXEC = Palindrome 

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

FibonacciSeries.o : Palindrome.c Palindrome.h
	$(CC) -c Palindrome.c $(CFLAGS)

clean:
	Del $(OBJ) $(EXEC)

runVal:
	valgrind ./$(EXEC)
