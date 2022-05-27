/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:13:15 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/27 18:36:32 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_4(t_stacks *stacks)
{
	if (ft_is_sorted(stacks) == 0)
	{
		ft_min_in_top_a(stacks);
		if (ft_is_sorted(stacks) == 0 && ft_a_is_sorted(stacks) == 0)
		{
			ft_push_b(stacks);
			ft_sort_3(stacks);
			ft_push_a(stacks);
		}
	}
}
