/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:06:34 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 17:49:39 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	char	**list;

	if (argc < 2)
		return (0);
	else if (argc == 2)
	{
		list = ft_split(argv[1], ' ');
		ft_pushswap(list);
	}
	else
	{
		argv++;
		ft_pushswap(argv);
	}
	return (0);
}

void	ft_pushswap(char **list)
{
	ft_printf("%d\n", ft_check_error(list));
	if (ft_check_error(list) == 0)
	{
		ft_printf("Error");
		return ;
	}
	ft_printf("Oui");
}
