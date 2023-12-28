CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

CFILES = push_swap.c \
		 push_swap_utils.c \
		 push_swap_utils2.c \
		 push_swap_utils3.c \
		 push_swap_utils4.c \
		 operations.c \
		 operations2.c \
		 operations3.c \
		 sort100Nodes.c \
		 sort500Nodes.c \
		 sortThreeAndFive.c \
		 sortHelper.c \
		 init.c \

OBJECTS=$(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean clean all
