#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/14 17:07:06 by aollivie          #+#    #+#              #
#    Updated: 2016/02/03 12:47:52 by aollivie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#


DEBUG=no
CC=gcc

ifeq ($(DEBUG), yes)
				CFLAGS= -Wall -Wextra -g -ansi -pedantic
else
		CFLAGS= -Wall -Wextra -Werror
endif

LIB=ar rc
RANLIB=ranlib

NAME =libft.a

I_DIR= -I inc/

O_DIR= obj

MKDIR = mkdir

VPATH= src/str:src/put:src/int:src/mem:src/char:src/file:src/lst


C_INT = ft_isascii.c ft_atoi.c ft_isalnum.c ft_isalpha.c  \
				ft_isascii.c ft_isdigit.c   ft_isprint.c \
 				ft_itoa.c  ft_isspace.c\

C_MEM=ft_memcpy.c ft_memmove.c ft_memset.c ft_memalloc.c \
			ft_memccpy.c ft_memcmp.c ft_memchr.c ft_memdel.c ft_bzero.c

C_STR=ft_strclr.c ft_strncmp.c ft_strcmp.c \
			ft_strncpy.c ft_strcpy.c ft_strnequ.c ft_strdel.c \
			ft_strnew.c ft_strdup.c ft_strnstr.c ft_strequ.c \
			ft_strrchr.c ft_strsplit.c ft_striter.c ft_striteri.c \
			ft_strjoin.c ft_strstr.c ft_strlcat.c ft_strsub.c \
			ft_strlen.c ft_strcat.c	ft_strmapi.c \
			ft_strchr.c	ft_strncat.c ft_strtrim.c ft_strmap.c

C_PUT=ft_putchar.c ft_putchar_fd.c ft_putendl.c \
 				ft_putendl_fd.c ft_putstr.c \
				ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c

C_CHAR=ft_tolower.c ft_fc.c ft_toupper.c  ft_nb_c.c\

C_FILE= get_next_line.c ft_list_str_from_file.c

C_LST= ft_free_list.c

OBJS= $(C_INT:%.c=$(O_DIR)/%.o) $(C_MEM:%.c=$(O_DIR)/%.o) \
 			$(C_STR:%.c=$(O_DIR)/%.o) $(C_PUT:%.c=$(O_DIR)/%.o) \
			$(C_CHAR:%.c=$(O_DIR)/%.o) $(C_FILE:%.c=$(O_DIR)/%.o) \
			$(C_LST:%.c=$(O_DIR)/%.o)


.PHONY : all clean fclean re

all : $(NAME)

ifeq ($(DEBUG),yes)
				@echo "Generation mode debug"
else
				@echo "Generation mode release"
endif

$(NAME):$(OBJS)
				$(LIB) $@ $^
				$(RANLIB) $(NAME)

# %.o: libft.h -I

$(O_DIR)/%.o: %.c
				$(CC) $(CFLAGS) $(I_DIR) -o $@ -c $<

$(OBJS): | $(O_DIR)

$(O_DIR):
				$(MKDIR) $(O_DIR)
clean :
		rm -rf $(O_DIR)

fclean : clean
		@rm -rf $(NAME)

re : fclean all
