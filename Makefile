CC=gcc
BIN=game
OBJ=main.o game2048.o dirction.o tools.o
FLAG=-Wall -Werror
STD=-std=gnu99
LINK=-ls

game:$(OBJ)
	$(CC) -o $(BIN) $(OBJ)
	
main.o:main.c game2048.h
	$(CC) -c main.c 
tools.o:tools.c tools.h game2048.h
	$(CC) -c tools.c
game2048.o:game2048.c game2048.h tools.h dirction.h
	$(CC) -c game2048.c
dirction.o:dirction.c  dirction.h 
	$(CC) -c dirction.c
	
clean:
	rm $(BIN) $(OBJ)	



