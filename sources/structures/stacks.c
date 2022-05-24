/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:04:58 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 15:13:30 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_count_index(char **list)
{
	int	i;

	i = 0;
	while (list[i])
		i++;
	return (i);
}

long long	*ft_create_stack(char **list)
{
	int			index;
	long long	*stack;
	int			i;

	i = 0;
	index = ft_count_index(list);
	stack = ft_calloc(index, sizeof(long long));
	if (!stack)
		return (NULL);
	while (i < index)
	{
		stack[i] = ft_atoll(list[i]);
		i++;
	}
	ft_free_list(list);
	return (stack);
}
