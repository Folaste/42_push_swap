/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:11:42 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/26 19:25:49 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap_a(t_stacks *stacks)
{
	int tmp;
	
	if (stacks->size_a >= 2)
	{
		tmp = stacks->stack_a[0];
		stacks->stack_a[0] = stacks->stack_a[1];
		stacks->stack_a[1] = tmp;
		ft_printf("sa\n");
	}	
}

void	ft_swap_b(t_stacks *stacks)
{
	int tmp;
	
	if (stacks->size_b >= 2)
	{
		tmp = stacks->stack_b[0];
		stacks->stack_b[0] = stacks->stack_b[1];
		stacks->stack_b[1] = tmp;
		ft_printf("sb\n");
	}	
}

void	ft_swap_s(t_stacks *stacks)
{
	int tmp;

	if (stacks->size_a >= 2 && stacks->size_b >= 2)
	{
		tmp = stacks->stack_a[0];
		stacks->stack_a[0] = stacks->stack_a[1];
		stacks->stack_a[1] = tmp;
		tmp = stacks->stack_b[0];
		stacks->stack_b[0] = stacks->stack_b[1];
		stacks->stack_b[1] = tmp;
		ft_printf("ss\n");
	}
}
