CC = gcc
CFLAGS = -Wall -pedantic -ansi -g
OBJ = Matrix.o
EXEC = Matrix 

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

FibonacciSeries.o : Matrix.c Matrix.h
	$(CC) -c Matrix.c $(CFLAGS)

clean:
	Del $(OBJ) $(EXEC)

runVal:
	valgrind ./$(EXEC)
