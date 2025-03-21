# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/14 18:05:43 by lkhye-ya          #+#    #+#              #
#    Updated: 2025/03/21 18:05:18 by lkhye-ya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = includes/libft/libft.a
FT_PRINTF = includes/ft_printf/ft_printf.a
PS = includes/push_swap.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

PUSH_SWAP = PUSH_SWAP

SRCS = srcs/main/push_swap.c srcs/sort_under_5_num/sort_under_5_num.c srcs/utils/sorting_utils.c \

OBJS = $(SRCS:.c=.o)

all: $(PUSH_SWAP)

$(PUSH_SWAP): $(OBJS) $(LIBFT) $(FT_PRINTF)
		$(AR) $@ $^
				
$(FT_PRINTF):
		$(MAKE) -C includes/ft_printf
				
$(LIBFT):
		$(MAKE) -C includes/libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
				
clean:
		$(MAKE) clean -C includes/ft_printf
		$(MAKE) clean -C includes/libft
		# rm -rf $(OBJS)

fclean:
		$(MAKE) clean -C includes/ft_printf
		$(MAKE) clean -C includes/libft
		rm -rf $(PS) $(LIBFT) $(FT_PRINTF)

re: fclean all

.PHONY: all clean fclean re