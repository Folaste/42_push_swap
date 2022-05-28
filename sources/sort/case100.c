/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:10:30 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/28 19:15:54 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_sort_100(t_stacks *stacks)
{
	while (ft_is_sorted(stacks) == 0)
	{
		while (ft_a_is_sorted(stacks) == 0)
		{
			ft_min_in_top_a(stacks);
			if (ft_a_is_sorted(stacks) == 0)
				ft_push_b(stacks);
		}
		ft_push_a(stacks);
	}
}
