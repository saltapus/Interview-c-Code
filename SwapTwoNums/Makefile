#Author: Anthony Cameron
#Date Modified: 06/01/202

CC = gcc
CFLAGS = -Wall -pedantic -ansi -g
OBJ = SwapNum.o
EXEC = SwapNum 

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

FibonacciSeries.o : SwapNum.c SwapNum.h
	$(CC) -c SwapNum.c $(CFLAGS)

clean:
	Del $(OBJ) $(EXEC)

runVal:
	valgrind ./$(EXEC)
