CC = gcc
SRC = holberton.c main.c
OBJ = $(SRC:%.c=%.o)
NAME = holberton
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

%.o: %.c m.h
	$(CC) -c -o $@ $<
all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) *~ $(NAME)
oclean:
	$(RM) $(OBJ)
fclean: clean oclean
re: oclean all
