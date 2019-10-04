# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srobin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/19 16:06:57 by srobin            #+#    #+#              #
#    Updated: 2019/10/04 21:17:56 by srobin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = get_next_line.h

SOURCE_C = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		   ft_isdigit.c ft_isprint.c ft_itoa.c ft_memalloc.c ft_memccpy.c \
		   ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_strdup.c \
		   ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c \
		   ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
		   ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c \
		   ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strequ.c ft_striter.c \
		   ft_striteri.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c \
		   ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
		   ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c \
		   ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c \
		   ft_lstnew.c ft_lstadd.c ft_lstiter.c get_next_line.c \
		   ft_print_tab.c ft_strjoin3.c ft_tabfree.c ft_split_whitespaces.c \
		   ft_tablen.c

SOURCE_O = $(SOURCE_C:.c=.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)
	
$(NAME):
		gcc -c $(FLAGS) -I $(INCLUDES) $(SOURCE_C)
		ar rc $(NAME) $(SOURCE_O)
		ranlib $(NAME)

clean:
		rm -f $(SOURCE_O)

fclean: clean
		rm -f $(NAME)

re: fclean all
