/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporto <fporto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 00:43:16 by mgueifao          #+#    #+#             */
/*   Updated: 2022/03/03 19:35:37 by fporto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(void)
{
	t_stack	*ret;

	ret = malloc(sizeof(t_stack));
	if (!ret)
		return (NULL);
	ret->size = 0;
	ret->top = NULL;
	return (ret);
}
