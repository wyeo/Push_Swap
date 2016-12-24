# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wyeo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/04 16:38:54 by wyeo              #+#    #+#              #
#    Updated: 2015/04/19 01:50:44 by wyeo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror

CFILES = ft_particular_case.c\
		 ft_add_elem.c\
		 ft_affiche_liste.c\
		 ft_algo.c\
		 ft_check_params.c\
		 ft_del_elem.c\
		 ft_init_liste.c\
		 ft_mini.c\
		 ft_options.c\
		 ft_push.c\
		 ft_sort.c\
		 ft_reverse_rotate.c\
		 ft_rotate.c\
		 ft_swap.c\
		 ft_atoi.c\
		 ft_bzero.c\
		 ft_itoa.c\
		 ft_memalloc.c\
		 ft_memset.c\
		 ft_ptrswap.c\
		 ft_putchar.c\
		 ft_putchar_fd.c\
		 ft_putendl.c\
		 ft_putendl_fd.c\
		 ft_putnbr.c\
		 ft_putstr.c\
		 ft_putstr_fd.c\
		 ft_strcmp.c\
		 ft_strequ.c\
		 ft_strlen.c\
		 ft_strnew.c\
		 push_swap.c

OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	@$(CC) $(FLAGS) -c $(CFILES)
	@$(CC) $(FLAGS) $(OFILES) $(LIB) -o $(NAME)

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)

re: clean fclean
