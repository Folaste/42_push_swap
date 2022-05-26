/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:49:38 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/26 19:28:01 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_down_tab(int *stack, int len)
{
	int	i;
	
	i = len;
	while (i != 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
}

void ft_up_tab(int *stack, int len)
{
	int	i;
	
	i = 0;
	while (i != len - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
}
