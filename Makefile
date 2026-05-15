# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/24 23:13:36 by gfranca           #+#    #+#              #
#    Updated: 2026/05/13 23:05:48 by gfranca          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = \
	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c \
	ft_toupper.c ft_strrchr.c ft_strnstr.c ft_bzero.c ft_memset.c ft_memchr.c \
	ft_memcpy.c ft_memmove.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_substr.c \
	ft_strtrim.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_lstnew.c ft_lstadd_front.c \
	ft_lstsize.c ft_lstadd_back.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
	ft_lstmap.c ft_split.c
	
	
OBJS = $(SRC:.c=.o)
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re