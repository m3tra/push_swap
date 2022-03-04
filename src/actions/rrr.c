/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporto <fporto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:46:49 by fporto            #+#    #+#             */
/*   Updated: 2022/03/04 19:34:33 by fporto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_ps *ps)
{
	rra(ps);
	rrb(ps);
	if (PRINT_MOVES)
		ft_putstr_fd("rrr\n", 1);
}
