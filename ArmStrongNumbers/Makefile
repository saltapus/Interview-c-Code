CC = gcc
CFLAGS = -Wall -pedantic -ansi -g
OBJ = ArmStrong.o
EXEC = ArmStrong 

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

FibonacciSeries.o : ArmStrong.c ArmStrong.h
	$(CC) -c ArmStrong.c $(CFLAGS)

clean:
	Del $(OBJ) $(EXEC)

runVal:
	valgrind ./$(EXEC)