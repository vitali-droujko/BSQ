##
## EPITECH PROJECT, 2020
## makefileds
## File description:
## dcd
##

NAME	=	bsq

SRC		=	src/main.c 		\
			src/ak.c 	\
			src/d_algo.c 	\
			src/comparator.c 	\
			src/deterline.c 	\
			src/determinator.c 	\
			src/pre_comparator.c \
			src/print_algo.c 	\
			src/recuperator.c 	\

LIB		=	/lib/

MYH		=	my.h

STRUCT 	= 	my_struct.h

CFLAGS	+=	-I.$(MY)

MY	=	/include/

CC	=	gcc

all	:	$(OBJ)
		make -C lib/ all
		$(CC) -o $(NAME) main.c src/*.c $(CFLAGS) -L.$(LIB) -lmy -g3

clean	:
		rm -f $(OBJ)
		make -C lib/ clean

fclean	:	clean
		rm -f $(NAME)
		make -C lib/ fclean

re	:	fclean all
		make -C lib/ re
