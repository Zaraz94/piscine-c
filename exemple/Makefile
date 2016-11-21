
NAME=colle-2
SRC=count_ligne_char.c create_tab.c ft_strcmp.c \
		ft_strdup.c ft_strlen.c main.c \
		check_form.c check_line.c check_form_colle.c \
		ft_putnbr.c print.c
OBJ=$(SRC:.c=.o)
CFLAGS=-Wall -Werror -Wextra -I include
RM=rm -f

all:$(NAME)

$(NAME):$(OBJ)
	gcc $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)
