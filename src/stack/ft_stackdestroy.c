/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdestroy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporto <fporto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 01:51:24 by mgueifao          #+#    #+#             */
/*   Updated: 2022/03/04 17:55:15 by fporto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackdestroy(t_stack *stack, void (*del)(t_content))
{
	while (stack->size)
	{
		if (del)
			del(ft_stackpop(stack));
		else
			ft_stackpop(stack);
	}
	free(stack);
}
