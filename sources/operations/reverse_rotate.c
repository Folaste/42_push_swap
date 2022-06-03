/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:40:20 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/02 18:24:04 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reverse_rotate_a(t_stacks *stacks)
{
	int	tmp;

	if (stacks->size_a >= 2)
	{
		tmp = stacks->stack_a[stacks->size_a - 1];
		ft_down_tab(stacks->stack_a, stacks->size_a);
		stacks->stack_a[0] = tmp;
		ft_printf("rra\n");
	}
}

void	ft_reverse_rotate_b(t_stacks *stacks)
{
	int	tmp;

	if (stacks->size_b >= 2)
	{
		tmp = stacks->stack_b[stacks->size_b - 1];
		ft_down_tab(stacks->stack_b, stacks->size_b);
		stacks->stack_b[0] = tmp;
		ft_printf("rrb\n");
	}
}

void	ft_reverse_rotate_r(t_stacks *stacks)
{
	int	tmp;

	if (stacks->size_a >= 2 && stacks->size_b >= 2)
	{
		tmp = stacks->stack_a[stacks->size_a - 1];
		ft_down_tab(stacks->stack_a, stacks->size_a);
		stacks->stack_a[0] = tmp;
		tmp = stacks->stack_b[stacks->size_b - 1];
		ft_down_tab(stacks->stack_b, stacks->size_b);
		stacks->stack_b[0] = tmp;
		ft_printf("rrr\n");
	}
}
