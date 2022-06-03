/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:49:38 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/02 19:40:24 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_down_tab(int *stack, int len)
{
	int	i;

	i = len;
	while (i != 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
}

void	ft_up_tab(int *stack, int len)
{
	int	i;

	i = 0;
	while (i != len - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
}

void	ft_put_in_top_a(t_stacks *stacks, int index)
{
	if (index > (stacks->size_a / 2))
		while (index++ != stacks->size_a)
			ft_reverse_rotate_a(stacks);
	else
		while (index-- != 0)
			ft_rotate_a(stacks);
}

void	ft_put_in_top_b(t_stacks *stacks, int index)
{
	if (index > (stacks->size_b / 2))
		while (index++ != stacks->size_b)
			ft_reverse_rotate_b(stacks);
	else
		while (index-- != 0)
			ft_rotate_b(stacks);
}

void	ft_best_in_top(t_stacks *stacks, t_groups *group)
{
	int	hold_1;
	int	hold_2;

	hold_1 = -1;
	hold_2 = stacks->size_a;
	while (hold_1++ != stacks->size_a)
		if (group->tab[0] <= stacks->stack_a[hold_1]
			&& stacks->stack_a[hold_1] <= group->tab[group->size - 1])
			break ;
	while (hold_2-- != 0)
		if (group->tab[0] <= stacks->stack_a[hold_2]
			&& stacks->stack_a[hold_2] <= group->tab[group->size - 1])
			break ;
	if ((stacks->size_a - hold_2) > hold_1)
		ft_put_in_top_a(stacks, hold_1);
	else
		ft_put_in_top_a(stacks, hold_2);
}
