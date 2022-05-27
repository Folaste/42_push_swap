/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:09:28 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/27 18:46:08 by fleblanc         ###   ########.fr       */
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

/*--- error/ ---*/
	/*--- ft_check_error.c ---*/
int			ft_check_error(char **list);
int			ft_error_is_not_number(char **list);
int			ft_error_is_bigger_int(int limit, long long *stack);
int			ft_error_is_dupli(int limit, long long *stack);

/*--- operations/ ---*/
	/*--- min.c ---*/
int			ft_find_min(int *tab, int len);
void		ft_min_in_top_a(t_stacks *stacks);
void		ft_min_in_top_b(t_stacks *stacks);

	/*--- move_tab.c ---*/
void		ft_down_tab(int *stack, int len);
void		ft_up_tab(int *stack, int len);

	/*--- push.c ---*/
void		ft_push_a(t_stacks *stacks);
void		ft_push_b(t_stacks *stacks);

	/*--- swap.c ---*/
void		ft_swap_a(t_stacks *stacks);
void		ft_swap_b(t_stacks *stacks);
void		ft_swap_s(t_stacks *stacks);

	/*--- rotate.c ---*/
void		ft_rotate_a(t_stacks *stacks);
void		ft_rotate_b(t_stacks *stacks);
void		ft_rotate_r(t_stacks *stacks);

	/*--- reverse_rotate.c ---*/
void		ft_reverse_rotate_a(t_stacks *stacks);
void		ft_reverse_rotate_b(t_stacks *stacks);
void		ft_reverse_rotate_r(t_stacks *stacks);

/*--- print/ ---*/
	/*--- ft_print_list.c ---*/
void		ft_print_list(char **list);

	/*--- ft_print_stacks.c ---*/
void		ft_print_stacks(t_stacks *stacks);
void		ft_print_stacks_end(void);

/*--- sort/ ---*/
	/*--- case2.c ---*/
void		ft_sort_2(t_stacks *stacks);

	/*--- case3.c ---*/
void		ft_sort_3(t_stacks *s);

	/*--- case4.c ---*/
void		ft_sort_4(t_stacks *stacks);

	/*--- case5.c ---*/
void		ft_sort_5(t_stacks *stacks);

	/*--- is_sorted.c ---*/
int			ft_a_is_sorted(t_stacks *stacks);
int			ft_b_is_sorted(t_stacks *stacks);
int			ft_is_sorted(t_stacks *stacks);

/*--- structures/ ---*/
	/*--- list.c ---*/
char		**ft_create_list(int argc, char **argv);
void		ft_free_list(char **list);
int			ft_count_index(char **list);

	/*--- stacks.c ---*/
t_stacks	*ft_init_struct(char **list);
void		ft_free_struct(t_stacks *stacks);

#endif
