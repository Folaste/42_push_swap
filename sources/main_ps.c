/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:06:34 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/26 19:18:54 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	char		**list;
	t_stacks	*stacks;

	if (argc < 2 || argv[1][0] == 0)
		return (0);
	else if (argc == 2)
	{
		list = ft_split(argv[1], ' ');
		ft_check_error(list);
		stacks = ft_init_struct(list);
		ft_print_stacks(stacks);
		ft_push_b(stacks);
		ft_print_stacks(stacks);
		ft_swap_a(stacks);
		ft_print_stacks(stacks);
		ft_push_a(stacks);
		ft_print_stacks(stacks);
		ft_free_struct(stacks);
		ft_free_list(list);
	}
	else
	{
		argv++;
		ft_check_error(argv);
	}
	return (0);
}
