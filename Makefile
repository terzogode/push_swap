NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

SRC = checker.c fill_free_stack.c ft_rotate.c ft_swap.c fts.c min_sort.c push_swap.c push_utils.c stack_index.c

OBJECT = $(SRC:.c=.o)

ARG ?= "default"

all: $(NAME)

$(NAME): $(SRC)
	cc $(CFLAGS) $(SRC) -o $(NAME)
	$(MAKE) yolo

clean:

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

yolo:


	@echo	'⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠠'
	@echo	'⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠶⡣⠑⠁'
	@echo	'⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢤⣮⠙⠓⠈⠀⠀'
	@echo	'⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⢊⡵⠋⠀⠀⠀⠀⠀⠀'
	@echo	'⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⢴⡯⠚⠁⠀⠀⠀⠀⠀⠀⠀⠀'
	@echo	'⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠛⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀'
	@echo	'⠀⢀⣤⣶⣿⣿⣷⣦⡀⠀⠀⠀⢀⣠⡾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀'
	@echo	'⣰⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⢶⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀'
	@echo	'⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⢀⠔⢔⠊⡠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀'
	@echo	'⢻⣿⣿⣿⣿⣿⡟⠉⢙⢟⢵⢿⠗⢨⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀'
	@echo	'⠀⠙⣿⠛⠙⢏⣑⠖⡱⣮⠄⠁⢀⡾⢀⡇⢰⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀'
	@echo	'⠀⠀⠘⠓⠒⢉⡵⣊⡴⣃⣠⠄⠉⣠⠞⢡⡟⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀'
	@echo	'⠀⢀⠖⢠⢔⣡⠞⠋⠀⠐⠶⡖⣀⡀⠘⠩⠴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀'
	@echo	'⠀⠃⢺⡿⠋⠁⠀⠀⠀⠀⠀⠈⠁⠴⢄⠐⠧⣠⣞⡻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀'
	@echo	'⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡾⠟⠈⣿⡿⠃⠺⠷⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀'
	@echo	'⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⠏⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣄⠀⠀⠀⠀⠀⠀⠀'
	@echo	'⠀⠀⠀⠀⠀⠀⠀⠀⣠⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢷⣄⠀⠀⠀⠀⠀'
	@echo	'⠀⠀⠀⠀⠀⠀⠐⢿⡋⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠿⣛⡃⠀⠀⠀'
	@echo	'⠀⠀⠀⠀⠀⠀⠀⣩⣥⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣯⠆⠀⠀⠀'
	@echo	'⠀⠀⠀⠀⠀⠀⠀⠈⢻⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡟⠀⠀⠀⠀'
	@echo	'⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⠁⠀⠀⠀⠀'
	@echo	'⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⡇⠀⠀⠀⠀⠀'
	@echo	'⠀⠀⠀⠀⠀⠀⢀⠀⣤⢲⣦⣤⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⡶⡶⣰⠤⠀⠀⠀⠀'
	@echo	'⠀⠀⠀⠀⠀⠀⠀⠛⠉⠁⠁⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠉⠒⠁⠁⠀⠀⠀'
