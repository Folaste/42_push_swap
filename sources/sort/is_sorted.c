/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:58:30 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/27 18:35:37 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_sorted(t_stacks *stacks)
{
	int	i;

	i = 0;
	if (stacks->size_b != 0)
		return (0);
	while (i < stacks->size_a - 1)
	{
		if (stacks->stack_a[i] > stacks->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int ft_a_is_sorted(t_stacks *stacks)
{
	int i;

	i = 0;
	while (i < stacks->size_a - 1)
	{
		if (stacks->stack_a[i] > stacks->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int ft_b_is_sorted(t_stacks *stacks)
{
	int i;

	i = 0;
	while (i < stacks->size_b - 1)
	{
		if (stacks->stack_b[i] < stacks->stack_b[i + 1])
			return (0);
		i++;
	}
	return (1);
}
