/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:55:55 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/27 11:59:33 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_stacks(t_stacks *stacks)
{
	int	i;

	i = 0;
	while (i < stacks->size_a && i < stacks->size_b)
	{
		ft_printf(" %11d || %d \n", stacks->stack_a[i], stacks->stack_b[i]);
		i++;
	}
	if (i == stacks->size_a)
	{
		while (i < stacks->size_b)
		{
			ft_printf(" %-11s || %d \n", "", stacks->stack_b[i]);
			i++;
		}
	}
	else if (i == stacks->size_b)
	{
		while (i < stacks->size_a)
		{
			ft_printf(" %11d || \n", stacks->stack_a[i]);
			i++;
		}
	}
	ft_print_stacks_end();
}

void	ft_print_stacks_end(void)
{
	ft_printf(" ----------- || ----------- \n");
	ft_printf("   stack A   ||   stack B   \n");
}
