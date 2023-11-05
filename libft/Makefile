# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 22:39:15 by flucas-d          #+#    #+#              #
#    Updated: 2023/10/31 16:25:34 by flucas-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC      = cc
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror -I.
NAME    = libft.a

# Paths and Files
SRCS    = ft_atoi.c ft_itoa.c ft_toupper.c ft_tolower.c \
          ft_bzero.c ft_calloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
          ft_memcpy.c ft_memmove.c ft_memset.c \
          ft_putchar_fd.c ft_putendl.c ft_putnbr_fd.c ft_putstr_fd.c \
          ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
          ft_isprint.c ft_split.c ft_strchr.c ft_strdup.c ft_strlen.c \
          ft_strjoin.c ft_strmapi.c ft_strcmp.c ft_strncmp.c ft_strlcpy.c \
          ft_strlcat.c ft_substr.c ft_strtrim.c ft_strnstr.c ft_striteri.c \
		  ft_strrchr.c

BONUS_SRCS  = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
                ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS    = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
