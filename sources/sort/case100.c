/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:10:30 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/02 18:53:47 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_100(t_stacks *stacks)
{
	int			*st_copy;
	t_groups	*group;
	t_groups	*f_group;

	if (ft_is_sorted(stacks) == 0)
	{
		st_copy = ft_create_copy(stacks);
		if (!st_copy)
			return ;
		ft_stacks_in_index(stacks, st_copy);
		f_group = ft_init_first_group(stacks);
		ft_move_group(stacks, f_group);
		ft_free_groups(f_group);
		while (stacks->size_a >= 5)
		{
			group = ft_init_groups_100(stacks);
			ft_move_group(stacks, group);
			ft_free_groups(group);
		}
		ft_sort_5(stacks);
		while (stacks->size_b != 0)
			ft_push_a(stacks);
		free(st_copy);
	}
}

void	ft_stacks_in_index(t_stacks *stacks, int *tab)
{
	int	i;
	int	j;
	int	min;
	int	n_min;

	i = 1;
	j = -1;
	min = ft_find_min(tab, stacks->size_a);
	while (j++ < stacks->size_a)
		if (tab[j] == min)
			stacks->stack_a[j] = i;
	i++;
	j = -1;
	while (i < stacks->size_a + 1)
	{
		n_min = ft_find_next_min(tab, stacks->size_a, min);
		while (j++ < stacks->size_a)
			if (tab[j] == n_min)
				stacks->stack_a[j] = i;
		j = -1;
		i++;
		min = n_min;
	}
}

void	ft_move_group(t_stacks *s, t_groups *group)
{
	while (group->remain != 0)
	{
		ft_best_in_top(s, group);
		if (group->remain == group->size || group->remain == group->size - 1)
		{	
			ft_push_b(s);
			if (ft_b_is_sorted(s) == 0)
				ft_swap_b(s);
		}
		else
		{
			if (s->stack_a[0] < ft_find_min(s->stack_b, s->size_b))
			{
				ft_max_in_top_b(s);
				ft_push_b(s);
			}
			else
			{
				ft_prev_max_in_top_b(s);
				ft_push_b(s);
			}
		}
		group->remain--;
	}
	ft_max_in_top_b(s);
}
