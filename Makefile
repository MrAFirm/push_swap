# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/14 18:05:43 by lkhye-ya          #+#    #+#              #
#    Updated: 2025/03/25 19:26:56 by lkhye-ya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = includes/libft/libft.a
FT_PRINTF = includes/ft_printf/ft_printf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
AR = ar rcs

PUSH_SWAP = push_swap

SRCS = srcs/main/push_swap.c srcs/sort_under_5_num/sort_under_5_num.c srcs/utils/sorting_utils.c 
OPERATIONS = operations/pushes/push_a.c operations/pushes/push_b.c operations/reverse_rotates/rrotate_a.c \
		operations/reverse_rotates/rrotate_b.c operations/reverse_rotates/rrrotate.c operations/rotates/rotate_a.c operations/rotates/rotate_b.c \
		operations/rotates/rotate_rr.c operations/swaps/swap_a.c operations/swaps/swap_b.c operations/swaps/swap_ss.c 

OBJS = $(SRCS:.c=.o)
OBJS_OP = $(OPERATIONS:.c=.o)

all: $(PUSH_SWAP)

$(PUSH_SWAP): $(OBJS) $(OBJS_OP) $(LIBFT) $(FT_PRINTF)
		$(CC) $(CFLAGS) -o $@ $^
				
$(FT_PRINTF):
		$(MAKE) -C includes/ft_printf
				
$(LIBFT):
		$(MAKE) -C includes/libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
				
clean:
		$(MAKE) clean -C includes/ft_printf
		$(MAKE) clean -C includes/libft
		rm -rf $(OBJS) $(OBJS_OP) $(PUSH_SWAP)

fclean:
		$(MAKE) clean -C includes/ft_printf
		$(MAKE) clean -C includes/libft
		rm -rf $(OBJS) $(OBJS_OP) $(LIBFT) $(FT_PRINTF) $(PUSH_SWAP)

re: fclean all

.PHONY: all clean fclean re