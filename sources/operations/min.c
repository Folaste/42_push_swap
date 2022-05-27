/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:04:43 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/27 16:29:24 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_find_min(int *tab, int len)
{
	int	minimum;
	int	i;

	i = 0;
	minimum = 0;
	while (i < len)
	{
		if (tab[i] < tab[minimum])
		{
			minimum = i;
		}
		i++;
	}
	return (minimum);
}

void	ft_min_in_top_a(t_stacks *stacks)
{
	int	i_min;

	i_min = ft_find_min(stacks->stack_a, stacks->size_a);
	if (i_min > (stacks->size_a / 2))
		while (i_min++ != stacks->size_a)
			ft_reverse_rotate_a(stacks);
	else
		while (i_min-- != 0)
			ft_rotate_a(stacks);
}

void	ft_min_in_top_b(t_stacks *stacks)
{
	int	i_min;

	i_min = ft_find_min(stacks->stack_b, stacks->size_b);
	if (i_min > (stacks->size_b / 2))
		while (i_min++ != stacks->size_b)
			ft_reverse_rotate_b(stacks);
	else
		while (i_min-- != 0)
			ft_rotate_b(stacks);
}
