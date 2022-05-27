/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:06:34 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/27 18:46:19 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	char		**list;

	if (argc < 2 || argv[1][0] == 0)
		return (0);
	else if (argc == 2)
	{
		list = ft_split(argv[1], ' ');
		if (ft_check_error(list) == 1)
			ft_pushswap(list);
		ft_free_list(list);
	}
	else
	{
		argv++;
		if (ft_check_error(argv) == 1)
			ft_pushswap(argv);
	}
	return (0);
}

void	ft_pushswap(char **list)
{
	t_stacks	*stacks;

	stacks = ft_init_struct(list);
	if (stacks->size_a == 2)
		ft_sort_2(stacks);
	else if (stacks->size_a == 3)
		ft_sort_3(stacks);
	else if (stacks->size_a == 4)
		ft_sort_4(stacks);
	else if (stacks->size_a == 5)
		ft_sort_5(stacks);
//	ft_print_stacks(stacks);
/*
**	else if (stacks->size_a > 5 && stacks->size_a <= 100)
**		ft_sort_3(stacks);
**	else
**		ft_sort_3(stacks);
*/
	ft_free_struct(stacks);
}
