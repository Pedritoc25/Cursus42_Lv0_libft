NAME = libft.a

CC = CC

CFLAGS = -Wall -Wextra -Werror

AR = AR

ARFLAGS = -rcs

SRCS = ft_atoi.c ft_bzero.c calloc.c isalpha.c isalnum.c isascii.c isdigit.c isprint.c memchr.c memcmp.c memcpy.c memmove.c memset.c strchr.c strdup.c strjoin.c strlcat.c strlcpy.c strlen.c strncmp.c strnstr.c strrchr.c substr.c tolower.c toupper.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
fclean:
	@rm -f $(NAME)
	clean
re: fclean all

.PHONY: clean fclean re all