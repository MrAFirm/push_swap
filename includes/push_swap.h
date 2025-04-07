/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:33:37 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/07 20:29:13 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct node
{
	int			number;
	struct node	*next;
}   t_node;

typedef struct stack_a
{
	t_node			*top;
	// t_stack_a   *next_num;
	struct stack_b	*push_num;
	
}   t_stack_a;

typedef struct stack_b
{
	t_node			*top;
	// t_stack_b   *next_num;
	struct stack_a	*push_num;
	
}   t_stack_b;

typedef struct  data
{
    t_stack_a	*stack_a;
	t_stack_b	*stack_b;
	t_node		*node;
}	t_data;

/* Operations */

/* Swaps */
int swap_a(t_stack_a *stack_a);
int swap_b(t_stack_b *stack_b);
int swap_ss(t_stack_a *stack_a, t_stack_b *stack_b);

/* Pushes */
int push_a(t_stack_a *stack_a, t_stack_b *stack_b);
int push_b(t_stack_a *stack_a, t_stack_b *stack_b);

/* Rotates */
int rotate_a(t_stack_a *stack_a);
int rotate_b(t_stack_b *stack_b);
int rotate_rr(t_stack_a *stack_a, t_stack_b *stack_b);

/* Reverse Rotate */
int rrotate_a(t_stack_a *stack_a);
int rrotate_b(t_stack_b *stack_b);

/* Sorting Utils */
void	find_min_max_nodes(t_stack_a *stack_a, t_node **min, t_node **max);
int     stack_a_size(t_stack_a *stack_a);
int     stack_b_size(t_stack_b *stack_b);

/* Sorting Algs */
int sort_2(t_stack_a *stack_a);
int sort_3(t_stack_a *stack_a);
int sort_4(t_stack_a *stack_a);
int	reset_nodes(t_stack_a *stack_a, t_node **current, t_node **next, t_node **last);

/* Main Functions */
t_stack_a	*stack_a_init(void);
t_node		*new_node(int value);
t_node		*get_last_node_a(t_stack_a *stack_a);
t_node		*get_last_node_b(t_stack_b *stack_b);
int			node_add_back(t_stack_a *stack_a, int value);
void		free_nodes(t_stack_a *stack_a, t_node *node);

#endif