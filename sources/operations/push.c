/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:25:21 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/02 18:23:49 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_a(t_stacks *stacks)
{
	int	tmp;

	if (stacks->size_b != 0)
	{
		tmp = stacks->stack_b[0];
		ft_down_tab(stacks->stack_a, stacks->size_a);
		stacks->stack_a[0] = tmp;
		ft_up_tab(stacks->stack_b, stacks->size_b);
		stacks->size_a++;
		stacks->size_b--;
		ft_printf("pa\n");
	}
}

void	ft_push_b(t_stacks *stacks)
{
	int	tmp;

	if (stacks->size_a != 0)
	{
		tmp = stacks->stack_a[0];
		ft_down_tab(stacks->stack_b, stacks->size_b);
		stacks->stack_b[0] = tmp;
		ft_up_tab(stacks->stack_a, stacks->size_a);
		stacks->size_a--;
		stacks->size_b++;
		ft_printf("pb\n");
	}
}
