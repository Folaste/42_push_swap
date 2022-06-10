/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:04:43 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/02 12:27:38 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_find_min(int *tab, int len)
{
	int	min;
	int	i;

	min = 2147483647;
	i = 0;
	while (i < len)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	return (min);
}

int	ft_find_next_min(int *tab, int len, int min)
{
	int	n_min;
	int	i;

	n_min = 2147483647;
	i = 0;
	while (i < len)
	{
		if (tab[i] < n_min && tab[i] > min)
			n_min = tab[i];
		i++;
	}
	return (n_min);
}

void	ft_min_in_top_a(t_stacks *stacks)
{
	int	i_min;
	int	min;
	int	i;

	i = -1;
	min = ft_find_min(stacks->stack_a, stacks->size_a);
	while (i++ < stacks->size_a - 1)
		if (stacks->stack_a[i] == min)
			i_min = i;
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
	int	min;
	int	i;

	i = -1;
	min = ft_find_min(stacks->stack_b, stacks->size_b);
	while (i++ < stacks->size_b)
		if (stacks->stack_b[i] == min)
			i_min = i;
	if (i_min > (stacks->size_b / 2))
		while (i_min++ != stacks->size_b)
			ft_reverse_rotate_b(stacks);
	else
		while (i_min-- != 0)
			ft_rotate_b(stacks);
}
