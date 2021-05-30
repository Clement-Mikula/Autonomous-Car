##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

CC			=	gcc
RM			=	-rm -rf

##PATH##

SRC_PATH	=	sources/

##SRC##

SRC	        =	main.c  			\
                error_handling.c    \
				direction.c			\
				str_split.c			\
				need_for_stek.c		\
				speed.c				\
				get_array_len.c		\
				array_free.c		\
				loop.c				\
				empty_getline.c		\
				end_check.c			\

MAIN_SRC	=	$(addprefix $(SRC_PATH), $(SRC))

TESTS_SRC	=	$(TEST_PATH)error_test.c

OBJ			=	$(MAIN_SRC:.c=.o)

NAME		=	ai

##FLAGS##

CPPFLAGS	=	-iquote ./includes/
CFLAGS		=	-Wall -Wextra

##MAKE##

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

##DEBUG##

debug: CFLAGS += -g
debug: re

##CLEAN##

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

##RE##

re: fclean all

.PHONY: fclean all debug clean re
