/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:09:28 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 17:34:23 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include <stdlib.h>

typedef struct s_stacks	t_stacks;
struct s_stacks
{
	int	size_a;
	int	size_b;
	int	*stack_a;
	int	*stack_b;
};

/*--- main_ps.c ---*/
void		ft_pushswap(char **list);

/*--- structures ---*/
/*--- list.c ---*/
char		**ft_create_list(int argc, char **argv);
void		ft_free_list(char **list);

/*--- stacks.c ---*/
long long	*ft_create_stack(char **list);
int			ft_count_index(char **list);

/*--- print ---*/
/*--- print_list.c ---*/
void		ft_print_list(char **list);

/*--- error ---*/
/*--- ft_check_error.c ---*/
int			ft_check_error(char **list);
int			ft_error_is_not_number(char **list);
int			ft_error_is_bigger_int(long long *stack);
int			ft_error_is_dupli(long long *stack);

#endif
