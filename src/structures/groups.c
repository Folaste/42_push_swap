/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   groups.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:38:22 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/02 18:40:41 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_groups	*ft_init_first_group(t_stacks *stacks)
{
	t_groups	*group;
	int			i;

	i = 0;
	group = ft_calloc(1, sizeof(t_groups));
	if (!group)
		return (NULL);
	group->size = (stacks->size_a - 5) / 3;
	group->remain = group->size;
	group->tab = ft_calloc(group->size + 1, sizeof(int));
	if (!group->tab)
		ft_free_groups(group);
	group->tab[0] = ft_find_min(stacks->stack_a, stacks->size_a);
	while (i++ < group->size - 1)
		group->tab[i] = group->tab[i - 1] + 1;
	return (group);
}

t_groups	*ft_init_groups_100(t_stacks *stacks)
{
	t_groups	*group;
	int			i;

	i = 0;
	group = ft_calloc(1, sizeof(t_groups));
	if (!group)
		return (NULL);
	group->size = stacks->size_a / 3;
	group->remain = group->size;
	group->tab = ft_calloc(group->size + 1, sizeof(int));
	if (!group->tab)
		ft_free_groups(group);
	group->tab[0] = ft_find_min(stacks->stack_a, stacks->size_a);
	while (i++ < group->size - 1)
		group->tab[i] = group->tab[i - 1] + 1;
	return (group);
}

void	ft_free_groups(t_groups *group)
{
	if (group->tab)
		free(group->tab);
	free(group);
}

t_groups	*ft_init_groups_500(t_stacks *stacks)
{
	t_groups	*group;
	int			i;

	i = 0;
	group = ft_calloc(1, sizeof(t_groups));
	if (!group)
		return (NULL);
	group->size = stacks->size_a / 7;
	group->remain = group->size;
	group->tab = ft_calloc(group->size + 1, sizeof(int));
	if (!group->tab)
		ft_free_groups(group);
	group->tab[0] = ft_find_min(stacks->stack_a, stacks->size_a);
	while (i++ < group->size - 1)
		group->tab[i] = group->tab[i - 1] + 1;
	return (group);
}
