/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporto <fporto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:46:44 by fporto            #+#    #+#             */
/*   Updated: 2022/04/13 15:00:11 by fporto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_ps *ps)
{
	t_stack_elem	*tmp;
	t_stack_elem	*curr;

	moves_list_cat(ps->moves, move_new("rra"));
	if (ps->a->size < 2)
		return ;
	curr = ps->a->top;
	while (curr->prev->prev)
		curr = curr->prev;
	tmp = curr->prev;
	curr->prev = NULL;
	tmp->prev = ps->a->top;
	ps->a->top = tmp;
	if (PRINT_MOVES)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_ps *ps)
{
	t_stack_elem	*tmp;
	t_stack_elem	*curr;

	moves_list_cat(ps->moves, move_new("rrb"));
	if (ps->b->size < 2)
		return ;
	curr = ps->b->top;
	while (curr->prev->prev)
		curr = curr->prev;
	tmp = curr->prev;
	curr->prev = NULL;
	tmp->prev = ps->b->top;
	ps->b->top = tmp;
	if (PRINT_MOVES)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_ps *ps)
{
	moves_list_cat(ps->moves, move_new("rrr"));
	rra(ps);
	rrb(ps);
	if (PRINT_MOVES)
		ft_putstr_fd("rrr\n", 1);
}
