/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:09:28 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/26 19:30:03 by fleblanc         ###   ########.fr       */
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

/*--- structures/ ---*/
/*--- list.c ---*/
char		**ft_create_list(int argc, char **argv);
void		ft_free_list(char **list);
int			ft_count_index(char **list);

/*--- stacks.c ---*/
t_stacks	*ft_init_struct(char **list);
void		ft_free_struct(t_stacks *stacks);

/*--- print/ ---*/
/*--- ft_print_list.c ---*/
void		ft_print_list(char **list);

/*--- ft_print_stacks.c ---*/
void		ft_print_stacks(t_stacks *stacks);

/*--- operations/ ---*/
/*--- move_tab.c ---*/
void		ft_down_tab(int *stack, int len);
void		ft_up_tab(int *stack, int len);

/*--- push.c ---*/
void		ft_push_a(t_stacks *stacks);
void		ft_push_b(t_stacks *stacks);

/*--- push.c ---*/
void		ft_swap_a(t_stacks *stacks);
void		ft_swap_b(t_stacks *stacks);
void		ft_swap_s(t_stacks *stacks);

/*--- error/ ---*/
/*--- ft_check_error.c ---*/
int			ft_check_error(char **list);
int			ft_error_is_not_number(char **list);
int			ft_error_is_bigger_int(int limit, long long *stack);
int			ft_error_is_dupli(int limit, long long *stack);

#endif
