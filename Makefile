# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:10:42 by aumarin           #+#    #+#              #
#    Updated: 2023/04/29 11:00:01 by aumarin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlcat.c \
	ft_strlcpy.c \
	ft_putchar_fd.c \
	ft_putnbr_fd.c \
	ft_putendl_fd.c \
	ft_putstr_fd.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_itoa.c \
	ft_split.c \
	ft_strtrim.c \
	ft_strjoin.c \
	ft_substr.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_atoi.c \
	ft_strnstr.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_strncmp.c \
	ft_strrchr.c \
	ft_strchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_memmove.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memset.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_strlen.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isprint.c \
	get_next_line_utils.c \
	get_next_line.c \
	ft_pow.c \
	ft_min.c \
	ft_max.c \
	ft_big_atoi.c \
	ft_strndup.c
BONUS_SRC = ft_lstnew.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_front.c \
    ft_lstadd_back.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_lstdelone.c \
	ft_lstclear.c
OBJ = $(SRC:.c=.o)
BONUS_OBJ = ${BONUS_SRC:.c=.o}
C_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

.c.o:
	@echo "\033[0;33mcompiling... \033[0;37m"
	@gcc $(C_FLAGS)  -I . -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	@echo "\033[0;33mlinking... \033[0;37m"	
	@ar rcs $(NAME) $(OBJ)

bonus: ${OBJ} ${BONUS_OBJ}
	@ar rcs ${NAME} ${OBJ} ${BONUS_OBJ}

clean:
	@echo "\033[0;33mdeleting objects... \033[0;37m"
	@rm -f $(OBJ) $(BONUS_OBJ)
	@echo "\033[0;33mdone \033[0;37m"

fclean: clean
	rm -f $(NAME)

re: fclean all 
