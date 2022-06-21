##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

CC				=	gcc
AR				=	ar
ARFLAGS			=	rsc libmy.a *.o

all: make_lib

make_lib:
	$(CC)   *.c -c
	$(AR) $(ARFLAGS)
	cp my.h ../../include/my.h
	cp libmy.a ../libmy.a

clean:
	rm -rf *.o
	rm -rf *.a

fclean:
	rm -rf *.o
	rm -rf *.a
	rm -rf ../libmy.a
	rm -rf ../../include/*.h

re: fclean all
