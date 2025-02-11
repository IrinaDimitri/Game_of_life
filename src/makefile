CC = gcc
CFLAGS = -lpthread -Wall -Werror -Wextra
CODE = CODE/game_of_life.c 
OBJ = game_of_life 

all:
	$(CC) $(CFLAGS) -o $(OBJ) $(CODE)

run: all $(OBJ)
	./$(OBJ)

rebuild: clean all

clean:
	-rm $(OBJ)
	
check:
	clang-format -style=Google -n code/*.c code/*.h

