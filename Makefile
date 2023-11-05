# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flucas-d <fabriciol.sousa@student.42Lis    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 06:29:22 by flucas-d          #+#    #+#              #
#    Updated: 2023/11/02 19:17:27 by flucas-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c aux_func.c
INC = ft_printf.h
COMPRESS = ar rcs
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
CC = cc
OBJS = $(SRCS:.c=.o)
LIBFTDIR = ./libft
LIBFT = $(LIBFTDIR)/libft.a

all: $(NAME)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(@) -I.

$(NAME): $(LIBFT) $(OBJS)
		$(COMPRESS) $(NAME) $(OBJS) $(LIBFTDIR)/*.o

$(LIBFT):
		@$(MAKE) -C $(LIBFTDIR)

clean:
		@$(RM) $(OBJS)
fclean:	clean
	@${MAKE} -C $(LIBFTDIR) fclean
	@${RM} ${NAME}

re: fclean all

.PHONY: all fclean clean re