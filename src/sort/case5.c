/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:13:15 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/02 19:33:45 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_5(t_stacks *stacks)
{
	if (stacks->size_a <= 4)
	{
		ft_sort_4(stacks);
		return ;
	}
	if (ft_is_sorted(stacks) == 0)
	{
		ft_min_in_top_a(stacks);
		if (ft_is_sorted(stacks) == 0 && ft_a_is_sorted(stacks) == 0)
		{
			ft_push_b(stacks);
			ft_sort_4(stacks);
			ft_push_a(stacks);
		}
	}
}
