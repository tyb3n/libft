# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 14:54:00 by tbenoist          #+#    #+#              #
#    Updated: 2015/12/09 14:01:45 by tbenoist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c		ft_memalloc.c	ft_memdel.c		ft_putendl.c	\
	  ft_putstr_fd.c	ft_strcpy.c		ft_striteri.c	ft_strmapi.c	\
	  ft_strnew.c	  	ft_strsub.c		ft_isascii.c	ft_memccpy.c	\
	  ft_memmove.c		ft_putendl_fd.c	ft_strcat.c		ft_strdel.c		\
	  ft_strjoin.c		ft_strncat.c	ft_strnstr.c	ft_strtrim.c	\
	  ft_atoi.c			ft_isdigit.c	ft_memchr.c		ft_memset.c		\
	  ft_putnbr.c		ft_strchr.c		ft_strdup.c		ft_strlcat.c	\
	  ft_strncmp.c		ft_strrchr.c	ft_tolower.c	ft_bzero.c		\
	  ft_isprint.c		ft_memcmp.c		ft_putchar.c	ft_putnbr_fd.c	\
	  ft_strclr.c		ft_strequ.c		ft_strlen.c		ft_strncpy.c	\
	  ft_strsplit.c		ft_toupper.c	ft_isalnum.c	ft_itoa.c		\
	  ft_memcpy.c		ft_putchar_fd.c	ft_putstr.c		ft_strcmp.c		\
	  ft_striter.c		ft_strmap.c		ft_strnequ.c	ft_strstr.c		\
	  ft_lstnew.c 		ft_lstdel.c		ft_lstdelone.c	ft_lstiter.c	\
	  ft_lstmap.c 		ft_lstadd.c		ft_pow.c		ft_lstget.c		\
	  ft_lstadd_end.c	ft_lstrch.c		ft_strrev.c

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
