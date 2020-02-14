# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 14:54:00 by tbenoist          #+#    #+#              #
#    Updated: 2015/12/11 09:01:45 by tbenoist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = lknb_isalpha.c		lknb_memalloc.c	lknb_memdel.c		lknb_putendl.c	\
	  lknb_putstr_fd.c	lknb_strcpy.c		lknb_striteri.c	lknb_strmapi.c	\
	  lknb_strnew.c	  	lknb_strsub.c		lknb_isascii.c	lknb_memccpy.c	\
	  lknb_memmove.c		lknb_putendl_fd.c	lknb_strcat.c		lknb_strdel.c		\
	  lknb_strjoin.c		lknb_strncat.c	lknb_strnstr.c	lknb_strtrim.c	\
	  lknb_atoi.c			lknb_isdigit.c	lknb_memchr.c		lknb_memset.c		\
	  lknb_putnbr.c		lknb_strchr.c		lknb_strdup.c		lknb_strlcat.c	\
	  lknb_strncmp.c		lknb_strrchr.c	lknb_tolower.c	lknb_bzero.c		\
	  lknb_isprint.c		lknb_memcmp.c		lknb_putchar.c	lknb_putnbr_fd.c	\
	  lknb_strclr.c		lknb_strequ.c		lknb_strlen.c		lknb_strncpy.c	\
	  lknb_strsplit.c		lknb_toupper.c	lknb_isalnum.c	lknb_itoa.c		\
	  lknb_memcpy.c		lknb_putchar_fd.c	lknb_putstr.c		lknb_strcmp.c		\
	  lknb_striter.c		lknb_strmap.c		lknb_strnequ.c	lknb_strstr.c		\
	  lknb_lstnew.c 		lknb_lstdel.c		lknb_lstdelone.c	lknb_lstiter.c	\
	  lknb_lstmap.c 		lknb_lstadd.c		lknb_pow.c		lknb_lstget.c		\
	  lknb_lstadd_end.c	lknb_lstrch.c		lknb_strrev.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(SRC) 
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
