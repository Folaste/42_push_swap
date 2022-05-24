/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:56:58 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 17:49:36 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_error(char **list)
{
	long long	*stack;

	if (ft_error_is_not_number(list) == 1)
	{
		ft_free_list(list);
		return (0);
	}
	stack = ft_create_stack(list);
	if (ft_error_is_bigger_int(stack) == 1)
	{
		free(stack);
		return (0);
	}
	if (ft_error_is_dupli(stack) == 1)
	{
		free(stack);
		return (0);
	}
	return (1);
}

int	ft_error_is_not_number(char **list)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (list[i])
	{
		if (list[i][0] != '-' && ft_isdigit(list[i][0] == 0))
			return (1);
		j++;
		while (list[i][j] != 0)
		{
			if (ft_isdigit(list[i][j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_error_is_bigger_int(long long *stack)
{
	int	i;

	i = 0;
	while (stack[i])
	{
		if (stack[i] > 2147483648 || stack[i] < -2147483647)
			return (1);
		i++;
	}
	return (0);
}

int	ft_error_is_dupli(long long *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (stack[i])
	{
		while (stack[j])
		{
			if (stack[i] == stack[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}
