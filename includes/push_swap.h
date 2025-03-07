/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:33:37 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/07 19:34:42 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct  stack_a
{
    int         *number;
    t_stack_a   *next_num;
    t_stack_b   *push_num;
    
}               t_stack_a;

typedef struct  stack_b
{
    int         *number;
    t_stack_b   *next_num;
    t_stack_a   *push_num;
    
}               t_stack_b;

/* Operations */

/* Swaps */
int swap_a(t_stack_a *stack_a);
int swap_b(t_stack_a *stack_b);
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


#endif