# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/24 16:55:15 by ibohonos          #+#    #+#              #
#    Updated: 2017/11/28 14:54:48 by ibohonos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

RED			= \033[31m
RESET		= \033[0m
OBJ_DIR		= ./obj
SRC_DIR 	= ./srcs
INCL_DIR 	= ./includes
OBJ 		= $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))
SRC 		= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd.c ft_lstdel.c \
			ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c \
			ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c \
			ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putchar.c ft_putendl.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c \
			ft_putstr.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c \
			ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c \
			ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
			ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c \
			ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strrev.c ft_strsplit.c \
			ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c

all: $(NAME)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	@$(CC) $(FLAGS) -I $(INCL_DIR) -o $@ -c $<

$(NAME):
	@echo "$(RED)  &&        &&  &&&&&&&&    &&&&&&&&  &&&&&&&&&&  "
	@echo "  &&        &&  &&      &&  &&            &&      "
	@echo "  &&        &&  &&      &&  &&            &&      "
	@echo "  &&        &&  &&&&&&&&    &&&&&&&&      &&      "
	@echo "  &&        &&  &&      &&  &&            &&      "
	@echo "  &&        &&  &&      &&  &&            &&      "
	@echo "  &&&&&&&&  &&  &&&&&&&&    &&            &&      $(RESET)"
	@mkdir -p $(OBJ_DIR)
	@$(MAKE) $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	/bin/rm -rf $(OBJ_DIR)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
