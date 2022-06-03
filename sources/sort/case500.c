/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case500.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:34:48 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/02 19:39:57 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_500(t_stacks *stacks)
{
	int			*st_copy;
	t_groups	*group;

	st_copy = ft_create_copy(stacks);
	if (!st_copy)
		return ;
	ft_stacks_in_index(stacks, st_copy);
	while (stacks->size_a >= 100)
	{
		group = ft_init_groups_500(stacks);
		ft_move_group(stacks, group);
		ft_free_groups(group);
	}
	ft_sort_100_in_500(stacks);
	free(st_copy);
}

void	ft_sort_100_in_500(t_stacks *stacks)
{
	t_groups	*f_group;
	t_groups	*group;

	if (ft_a_is_sorted(stacks) == 0)
	{
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
	}
}
