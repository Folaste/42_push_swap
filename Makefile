# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 09:54:31 by fleblanc          #+#    #+#              #
#    Updated: 2022/05/28 19:13:46 by fleblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# Names

CHECKER		= checker_test
PUSH_SWAP	= push_swap
LIBNAME		= libft.a

# **************************************************************************** #
# Compilation

CC			= gcc -ggdb
IFLAGS		= -I $(INCDIR) -I $(LIBDIR)/$(INCDIR)
WFLAGS		= -Wall -Wextra -Werror

# **************************************************************************** #
# System Commands

MAKE		= make -sC
MKDIR		= mkdir -p
NORMINETTE	= /usr/bin/norminette
RM			= rm -rf

# **************************************************************************** #
# Directories

INCDIR		= ./includes
LIBDIR		= libft
OBJDIR		= ./objects
SRCDIR		= ./sources

# **************************************************************************** #
# List of sources files

SRC_CHECKER	= test/test.c

SRC_PUSHSWAP= main_ps.c \
			  error/ft_check_error.c \
			  operations/min.c \
			  operations/move_tab.c \
			  operations/push.c \
			  operations/reverse_rotate.c \
			  operations/rotate.c \
			  operations/swap.c \
			  print/ft_print_list.c \
			  print/ft_print_stacks.c \
			  sort/case100.c \
			  sort/case2.c \
			  sort/case3.c \
			  sort/case4.c \
			  sort/case5.c \
			  sort/is_sorted.c \
			  structures/lists.c \
			  structures/stacks.c \

# **************************************************************************** #
# Variables where are listed the names of sources and objects files

LFT			= $(addprefix $(LIBDIR)/, $(LIBNAME))
OBJ_CH		= $(addprefix $(OBJDIR)/, $(SRC_CHECKER:.c=.o))
OBJ_PS		= $(addprefix $(OBJDIR)/, $(SRC_PUSHSWAP:.c=.o))
SRC_CH		= $(addprefix $(SRCDIR)/, $(SRC_CHECKER))
SRC_PS		= $(addprefix $(SRCDIR)/, $(SRC_PUSHSWAP))

# **************************************************************************** #
# Extra

BASENAME	= `basename $(PWD)`
CR			= "\r"$(CLEAR)
CLEAR		= "\\033[0K"
EOC			= "\033[0;0m"
GREY		= "\033[0;30:"
RED			= "\033[0;31m"
GREEN		= "\033[0;32m"
YELLOW		= "\033[0;33m"
BLUE		= "\033[0;34m"
PURPLE		= "\033[0;35m"
CYAN		= "\033[0;36m"
WHITE		= "\033[0;37m"

# **************************************************************************** #
# Rules

all:	$(LFT) $(PUSH_SWAP) $(CHECKER)

$(LFT):	
		@$(MAKE) $(LIBDIR)

$(CHECKER): $(LFT) $(OBJ_CH)
		@$(CC) $(WFLAGS) $(OBJ_CH) $(LFT) -o $(CHECKER)
		@printf $(CR)$(GREEN)"✓ $(CHECKER) is created\n"$(EOC)

$(PUSH_SWAP): $(LFT) $(OBJ_PS)
		@$(CC) $(WFLAGS) $(OBJ_PS) $(LFT) -o $(PUSH_SWAP)
		@printf $(CR)$(GREEN)"✓ $(PUSH_SWAP) is created\n"$(EOC)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
		@$(MKDIR) $(dir $@)
		@$(CC) $(WFLAGS) $(IFLAGS) -c $< -o $@
		@printf $(CR)"[ $(BASENAME)/%s ]"$(CLEAR) $@

clean:
		@if [ -d $(OBJDIR) ]; then \
			$(RM) $(OBJDIR) \
			&& printf $(CR)$(YELLOW)"✗ The objects files of $(CHECKER) " \
			&& printf "and $(PUSH_SWAP) are cleaned\n"$(EOC)\
			&& $(MAKE) $(LIBDIR) clean; \
		fi

fclean: clean
		@$(MAKE) $(LIBDIR) fclean
		@if [ -e $(CHECKER) ]; then \
			$(RM) $(CHECKER) \
			&& printf $(CR)$(RED)"✗ $(CHECKER) is cleaned\n"$(EOC); \
		fi
		@if [ -e $(PUSH_SWAP) ]; then \
			$(RM) $(PUSH_SWAP) \
			&& printf $(CR)$(RED)"✗ $(PUSH_SWAP) is cleaned\n"$(EOC); \
		fi

re: fclean all

bonus: $(CHECKER)

norm:
		@$(NORMINETTE) $(SRCDIR) $(INCDIR) $(LIBDIR)/sources $(LIBDIR)/includes

.PHONY: all clean fclean re norm bonus
