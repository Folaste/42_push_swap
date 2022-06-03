/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:12:59 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/02 18:24:45 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate_a(t_stacks *stacks)
{
	int	tmp;

	if (stacks->size_a >= 2)
	{
		tmp = stacks->stack_a[0];
		ft_up_tab(stacks->stack_a, stacks->size_a);
		stacks->stack_a[stacks->size_a - 1] = tmp;
		ft_printf("ra\n");
	}
}

void	ft_rotate_b(t_stacks *stacks)
{
	int	tmp;

	if (stacks->size_b >= 2)
	{
		tmp = stacks->stack_b[0];
		ft_up_tab(stacks->stack_b, stacks->size_b);
		stacks->stack_b[stacks->size_b - 1] = tmp;
		ft_printf("rb\n");
	}
}

void	ft_rotate_r(t_stacks *stacks)
{
	int	tmp;

	if (stacks->size_a >= 2 && stacks->size_b >= 2)
	{
		tmp = stacks->stack_a[0];
		ft_up_tab(stacks->stack_a, stacks->size_a);
		stacks->stack_a[stacks->size_a - 1] = tmp;
		tmp = stacks->stack_b[0];
		ft_up_tab(stacks->stack_b, stacks->size_b);
		stacks->stack_b[stacks->size_b - 1] = tmp;
		ft_printf("rr\n");
	}
}
