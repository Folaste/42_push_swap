/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:28:11 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/02 14:04:03 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*ft_create_copy(t_stacks *stacks)
{
	int	*st_copy;
	int	i;

	i = -1;
	st_copy = ft_calloc(stacks->size_a + 1, sizeof(int));
	if (!st_copy)
		return (NULL);
	while (i++ < stacks->size_a - 1)
		st_copy[i] = stacks->stack_a[i];
	return (st_copy);
}
