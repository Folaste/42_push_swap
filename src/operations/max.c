/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:42:32 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/02 19:05:33 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_find_max(int *tab, int len)
{
	int	max;
	int	i;

	max = -2147483648;
	i = 0;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	ft_find_prev_max(int *tab, int len, int max)
{
	int	p_max;
	int	i;

	p_max = -2147483648;
	i = 0;
	while (i < len)
	{
		if (tab[i] > p_max && tab[i] < max)
			p_max = tab[i];
		i++;
	}
	return (p_max);
}

void	ft_max_in_top_a(t_stacks *stacks)
{
	int	i_max;
	int	max;
	int	i;

	i = -1;
	max = ft_find_max(stacks->stack_a, stacks->size_a);
	while (i++ < stacks->size_a)
		if (stacks->size_a == max)
			i_max = i;
	if (i_max > (stacks->size_a / 2))
		while (i_max++ != stacks->size_a)
			ft_reverse_rotate_a(stacks);
	else
		while (i_max-- != 0)
			ft_rotate_a(stacks);
}

void	ft_max_in_top_b(t_stacks *stacks)
{
	int	i_max;
	int	max;
	int	i;

	i = -1;
	max = ft_find_max(stacks->stack_b, stacks->size_b);
	while (i++ < stacks->size_b)
		if (stacks->stack_b[i] == max)
			i_max = i;
	if (i_max > (stacks->size_b / 2))
		while (i_max++ != stacks->size_b)
			ft_reverse_rotate_b(stacks);
	else
		while (i_max-- != 0)
			ft_rotate_b(stacks);
}

void	ft_prev_max_in_top_b(t_stacks *s)
{
	int	i_max;
	int	p_max;
	int	i;

	i = -1;
	p_max = ft_find_prev_max(s->stack_b, s->size_b, s->stack_a[0]);
	while (i++ < s->size_b)
		if (s->stack_b[i] == p_max)
			i_max = i;
	if (i_max > (s->size_b / 2))
		while (i_max++ != s->size_b)
			ft_reverse_rotate_b(s);
	else
		while (i_max-- > 0)
			ft_rotate_b(s);
}
