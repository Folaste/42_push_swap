/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:48:54 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 10:22:48 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_list(char **list)
{
	int	i;

	i = 0;
	while (list[i])
	{
		ft_printf("%s\n", list[i]);
		i++;
	}
	ft_printf("----------\n");
}
