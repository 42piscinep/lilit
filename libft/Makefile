# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lisimony <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 13:50:33 by lisimony          #+#    #+#              #
#    Updated: 2024/05/20 17:08:57 by lisimony         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

SRCS = \
        ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
        ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
        ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
        ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
        ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
        ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
        ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRCS = \
        ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
        ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC = cc
RM = rm -f
AR = ar -rcs

NO_COLOR = \033[0;39m
GREEN = \033[0;92m
MAGENTA = \033[0;96m

all:	$(NAME)

$(NAME): $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "$(GREEN)libft compiled$(NO_COLOR)"

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

$(BONUS_OBJS): $(BONUS_SRCS)
	$(CC) $(CFLAGS) -c $(BONUS_SRCS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
	@echo "$(MAGENTA)libft object files cleaned$(NO_COLOR)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(MAGENTA)libft.a cleaned$(NO_COLOR)"

re: fclean all
	@echo "$(GREEN)libft RE cleaned$(NO_COLOR)"