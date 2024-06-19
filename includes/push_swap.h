/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 11:48:22 by tviejo            #+#    #+#             */
/*   Updated: 2024/06/19 21:14:58 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdint.h>
# include <limits.h>
# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>


typedef struct s_stack
{
    int				*a;
    int             *b;
    int             size_a;
    int             size_b;
}	t_stack;

void    ft_sa(t_stack *stack, int mode);
void    ft_sb(t_stack *stack, int mode);
void    ft_ss(t_stack *stack, int mode);
void    ft_pa(t_stack *stack, int mode);
void    ft_pb(t_stack *stack, int mode);
void    ft_ra(t_stack *stack, int mode);
void    ft_rb(t_stack *stack, int mode);
void    ft_rr(t_stack *stack, int mode);
void    ft_rra(t_stack *stack, int mode);
void    ft_rrb(t_stack *stack, int mode);
void    ft_rrr(t_stack *stack, int mode);
int     ft_is_sorted(t_stack *stack, char c);
void    ft_sort(t_stack *stack);
int     ft_is_good(t_stack *stacks);
void    ft_print_stacks(t_stack *stacks);
int     ft_is_smallest_a(t_stack *stacks);
int     ft_is_smallest_b(t_stack *stacks);
int     ft_is_largest(t_stack *stacks);
int find_largest_stack_b(t_stack *stacks);
int find_smallest_stack_b(t_stack *stacks);
int find_largest_stack_a(t_stack *stacks);
int find_smallest_stack_a(t_stack *stacks);
void	ft_free_stacks(t_stack *stacks);
t_stack	create_temp_stack(t_stack *stacks);
int ft_is_pushable_a(t_stack *stacks);
int    ft_nb_move_ra(t_stack *stack);
int    ft_nb_move_rb(t_stack *stack);
int    ft_nb_move_rr(t_stack *stack);
int    ft_nb_move_rra(t_stack *stack);
int    ft_nb_move_rrb(t_stack *stack);
int    ft_nb_move_rrr(t_stack *stack);
int    ft_nb_move_temp_ra(t_stack *stack, int i);
int    ft_nb_move_temp_rb(t_stack *stack, int i);
int    ft_nb_move_temp_rr(t_stack *stack, int i);
int    ft_nb_move_temp_rra(t_stack *stack, int i);
int    ft_nb_move_temp_rrb(t_stack *stack, int i);
int    ft_nb_move_temp_rrr(t_stack *stack, int i);
void    ft_push_to_b(t_stack *stack);
void    ft_push_to_a(t_stack *stack);
int     ft_nb_rra(t_stack   *stack);
int     ft_nb_rrb(t_stack   *stack);
int     ft_nb_ra(t_stack   *stack);
int     ft_nb_rb(t_stack   *stack);
int     ft_nb_rra_top(t_stack   *stack);
int     ft_nb_rrb_top(t_stack   *stack);
int     ft_nb_ra_top(t_stack   *stack);
int     ft_nb_rb_top(t_stack   *stack);
void    ft_find_fastest_b(t_stack *stack);

#endif