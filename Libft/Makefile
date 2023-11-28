LIB = ar rcs
RM = rm -f

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_islower.c ./ft_isprint.c ./ft_isupper.c ./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_strchr.c ./ft_strdup.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c ./ft_tolower.c ./ft_toupper.c

OFILES = $(SRCS:.c=.o)
INCLUDE = libft.h

all: $(NAME)

$(NAME):$(OFILES) $(INCLUDE)
	$(LIB) $(NAME) $(OFILES) 

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OFILES) 
fclean: clean
	$(RM) $(NAME)

re: fclean all