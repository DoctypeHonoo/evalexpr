##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

CC = gcc

BIN = eval_expr

SRC = eval_expr.c

OBJ = eval_expr.o

LIB = ./lib/libmy.a

all : $(BIN)

$(BIN) : $(OBJ) $(LIB)
	$(CC) -o $(BIN) $(OBJ) -L./lib -lmy

$(OBJ) : $(SRC)
	gcc -c $(SRC)

$(LIB) :
	make -C ./lib/my

clean :
	rm -rf $(OBJ)

fclean : clean
	make -C ./lib/my/ fclean
	rm -rf $(BIN)
	rm -rf $(LIB)
