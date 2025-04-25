/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:33:37 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/25 16:38:57 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct	var_value
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
} t_value;

typedef struct node
{
	int			number;
	int			index;
	struct node	*next;
}   t_node;

typedef struct stack_a
{
	t_node			*top;
	struct stack_b	*push_num;
	
}   t_stack_a;

typedef struct stack_b
{
	t_node			*top;
	struct stack_a	*push_num;
	
}   t_stack_b;

typedef struct  data
{
    t_stack_a	*stack_a;
	t_stack_b	*stack_b;
	t_node		*node;
}	t_data;


/* Stack_b initalisation */
t_stack_b	*stack_b_init(void);
t_node		*get_last_node_b(t_stack_b *stack_b);

/* Operations */

/* Swaps */
void	swap_a(t_stack_a *stack_a);
void	swap_b(t_stack_b *stack_b);
void	swap_ss(t_stack_a *stack_a, t_stack_b *stack_b);

/* Pushes */
void	push_a(t_stack_a *stack_a, t_stack_b *stack_b);
void	push_b(t_stack_a *stack_a, t_stack_b *stack_b);

/* Rotates */
void	rotate_a(t_stack_a *stack_a);
void	rotate_b(t_stack_b *stack_b);
void	rotate_rr(t_stack_a *stack_a, t_stack_b *stack_b);

/* Reverse Rotate */
void	rrotate_a(t_stack_a *stack_a);
void	rrotate_b(t_stack_b *stack_b);
void    rrrotate(t_stack_a *stack_a, t_stack_b *stack_b);

/* Sorting Utils */
void	find_min_max_nodes(t_stack_a *stack_a, t_node **min, t_node **max);
int     stack_a_size(t_stack_a *stack_a);
int     stack_b_size(t_stack_b *stack_b);
void	move_min_to_top_5(t_stack_a *stack_a);
void	move_min_to_top_4(t_stack_a *stack_a);

/* Sorting Algs */
void	sort_2(t_stack_a *stack_a, t_value *var_value);
void	sort_3(t_stack_a *stack_a, t_value *var_value);
void	sort_4(t_stack_a *stack_a, t_stack_b *stack_b, t_value *var_value);
void	sort_5(t_stack_a *stack_a, t_stack_b *stack_b, t_value *var_value);
void	bubble_sort(int *arr, int index, int length);
void	sort_indexing(t_stack_a *stack_a);
void	radix_sort(t_stack_a *stack_a, t_stack_b *stack_b);


/* Main Functions */
t_node		*new_node(int value);
t_stack_a	*stack_a_init(void);
t_node		*get_last_node_a(t_stack_a *stack_a);
int			node_add_back_a(t_stack_a *stack_a, int value);
void		free_nodes(t_stack_a *stack_a, t_node *node);

#endif