/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:04:58 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/01 14:14:24 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stacks	*ft_init_struct(char **list)
{
	t_stacks	*stacks;
	int			i;

	stacks = ft_calloc(1, sizeof(t_stacks));
	if (!stacks)
		return (NULL);
	stacks->size_a = ft_count_index(list);
	stacks->size_b = 0;
	stacks->stack_a = ft_calloc(stacks->size_a + 1, sizeof(int));
	stacks->stack_b = ft_calloc(stacks->size_a + 1, sizeof(int));
	if (!stacks->stack_a || !stacks->stack_b)
	{
		ft_free_struct(stacks);
		return (NULL);
	}
	i = -1;
	while (++i < stacks->size_a)
		stacks->stack_a[i] = ft_atoi(list[i]);
	return (stacks);
}

void	ft_free_struct(t_stacks *stacks)
{
	if (stacks->stack_a)
		free(stacks->stack_a);
	if (stacks->stack_b)
		free(stacks->stack_b);
	free(stacks);
}
