
CC = g++
HDR = inc/dictionary.h inc/error.h inc/parser.h
SRC = src/main.cpp src/parser.cpp
OBJ = $(subst src/,bin/, $(subst .cpp,.o, $(SRC)))
EXE = bin/scheck

build : $(SRC) $(EXE) $(HDR)

$(EXE) : $(OBJ)
	$(CC) $(OBJ) -o $@

bin/main.o : src/main.cpp
	$(CC) -I inc -c $< -o $@

bin/parser.o : src/parser.cpp
	$(CC) -I inc -c $< -o $@

clean : 
	rm -f $(OBJ) $(EXE)

rebuild : clean build

