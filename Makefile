# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/28 13:05:20 by amunarbe          #+#    #+#              #
#    Updated: 2019/02/28 13:05:41 by amunarbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_atoi.c ft_putendl.c ft_strdup.c 	
SRC += ft_bzero.c ft_strequ.c	
SRC += ft_isalnum.c ft_putnbr.c ft_strnstr.c		
SRC += ft_isalpha.c ft_memccpy.c ft_strrchr.c	
SRC += ft_isascii.c ft_memchr.c ft_putstr.c	
SRC += ft_isdigit.c ft_memcmp.c ft_strlcat.c ft_strstr.c	
SRC += ft_isprint.c ft_memcpy.c ft_strcat.c ft_strlen.c
SRC += ft_strchr.c ft_strncpy.c	
SRC += ft_memmove.c ft_tolower.c	
SRC += ft_memset.c ft_strcmp.c ft_strncat.c ft_toupper.c	
SRC += ft_putchar.c ft_strcpy.c ft_strncmp.c ft_memalloc.c
SRC += ft_memdel.c 

OBJECTS = *.o

INCLUDE = libft.h

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRC) -I $(INCLUDE)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
