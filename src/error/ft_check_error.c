/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:56:58 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/27 13:56:10 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_error(char **list)
{
	long long	*tmp_stack;
	int			i;

	i = 0;
	if (ft_error_is_not_number(list) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	tmp_stack = ft_calloc(ft_count_index(list), sizeof(long long));
	while (list[i])
	{
		tmp_stack[i] = ft_atoll(list[i]);
		i++;
	}
	if (ft_error_is_bigger_int(ft_count_index(list), tmp_stack) == 0
		|| ft_error_is_dupli(ft_count_index(list), tmp_stack) == 0)
	{
		ft_printf("Error\n");
		free(tmp_stack);
		return (0);
	}
	free(tmp_stack);
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
		if (list[i][j] == '-' || ft_isdigit(list[i][j]) != 0)
		{
			j++;
			while (list[i][j])
			{
				if (ft_isdigit(list[i][j]) != 0)
					j++;
				else
					return (0);
			}
		}
		else
			return (0);
		j = 0;
		i++;
	}
	return (1);
}

int	ft_error_is_bigger_int(int limit, long long *stack)
{
	int	i;

	i = 0;
	while (i < limit)
	{
		if (stack[i] > 2147483647 || stack[i] < -2147483648)
			return (0);
		i++;
	}
	return (1);
}

int	ft_error_is_dupli(int limit, long long *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i + 1 < limit)
	{
		while (j < limit)
		{
			if (stack[i] == stack[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}
