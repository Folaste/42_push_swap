/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:28:51 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/02 19:15:39 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_3(t_stacks *s)
{
	if (s->stack_a[0] < s->stack_a[1] && s->stack_a[1] > s->stack_a[2]
		&& s->stack_a[2] > s->stack_a[0])
	{
		ft_swap_a(s);
		ft_rotate_a(s);
	}
	else if (s->stack_a[0] > s->stack_a[1]
		&& s->stack_a[1] < s->stack_a[2]
		&& s->stack_a[2] > s->stack_a[0])
		ft_swap_a(s);
	else if (s->stack_a[0] < s->stack_a[1]
		&& s->stack_a[1] > s->stack_a[2]
		&& s->stack_a[2] < s->stack_a[0])
		ft_reverse_rotate_a(s);
	else if (s->stack_a[0] > s->stack_a[1]
		&& s->stack_a[1] < s->stack_a[2]
		&& s->stack_a[2] < s->stack_a[0])
		ft_rotate_a(s);
	else if (s->stack_a[0] > s->stack_a[1]
		&& s->stack_a[1] > s->stack_a[2]
		&& s->stack_a[2] < s->stack_a[0])
	{
		ft_swap_a(s);
		ft_reverse_rotate_a(s);
	}
}
