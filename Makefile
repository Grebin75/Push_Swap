SRCS = $(SRCS_DIR)/pushswap.c \
	$(SRCS_DIR)/listutils_01.c \
	$(SRCS_DIR)/listutils_02.c \
	$(SRCS_DIR)/swap.c \
	$(SRCS_DIR)/push.c \
	$(SRCS_DIR)/rotate.c \
	$(SRCS_DIR)/reverserotate.c \
	$(SRCS_DIR)/pwutils.c \
	$(SRCS_DIR)/sort.c \
	$(SRCS_DIR)/bigsort.c \

SRCS_DIR = srcs

OBJS = $(subst $(SRCS_DIR), $(OBJS_DIR), $(SRCS:.c=.o))

OBJS_DIR = objs

FLAGS = -g -Wextra -Wall -Werror -fsanitize=address
CC = gcc
RM = rm -fr
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
		mkdir -p objs
		$(CC) $(FLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM)	$(NAME)

re: fclean all

.PHONY: clean all re fclean
