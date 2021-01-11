

CC = gcc
CFLAGS = -Wall -pedantic -ansi -g
OBJ = BinaryTree.o
EXEC = BinaryTree 

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

FibonacciSeries.o : BinaryTree.c BinaryTree.h
	$(CC) -c BinaryTree.c $(CFLAGS)

clean:
	Del $(OBJ) $(EXEC)

runVal:
	valgrind ./$(EXEC)