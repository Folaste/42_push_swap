/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:09:28 by fleblanc          #+#    #+#             */
/*   Updated: 2022/06/02 19:39:35 by fleblanc         ###   ########.fr       */
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

typedef struct s_groups	t_groups;
struct	s_groups
{
	int	*tab;
	int	size;
	int	remain;
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
	/*--- max.c ---*/
int			ft_find_max(int *tab, int len);
int			ft_find_prev_max(int *tab, int len, int max);
void		ft_max_in_top_a(t_stacks *stacks);
void		ft_max_in_top_b(t_stacks *stacks);
void		ft_prev_max_in_top_b(t_stacks *stacks);

	/*--- min.c ---*/
int			ft_find_min(int *tab, int len);
int			ft_find_next_min(int *tab, int len, int min);
void		ft_min_in_top_a(t_stacks *stacks);
void		ft_min_in_top_b(t_stacks *stacks);

	/*--- move_tab.c ---*/
void		ft_down_tab(int *stack, int len);
void		ft_put_in_top_a(t_stacks *stacks, int index);
void		ft_put_in_top_b(t_stacks *stacks, int index);
void		ft_up_tab(int *stack, int len);
void		ft_best_in_top(t_stacks *stacks, t_groups *group);

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
	/*--- case100.c ---*/
void		ft_sort_100(t_stacks *stacks);
void		ft_stacks_in_index(t_stacks *stacks, int *tab);
void		ft_move_group(t_stacks *stacks, t_groups *group);

	/*--- case2.c ---*/
void		ft_sort_2(t_stacks *stacks);

	/*--- case3.c ---*/
void		ft_sort_3(t_stacks *s);

	/*--- case4.c ---*/
void		ft_sort_4(t_stacks *stacks);

	/*--- case5.c ---*/
void		ft_sort_5(t_stacks *stacks);

	/*--- case500.c ---*/
void		ft_sort_500(t_stacks *stacks);
void		ft_sort_100_in_500(t_stacks *stacks);

	/*--- is_sorted.c ---*/
int			ft_a_is_sorted(t_stacks *stacks);
int			ft_b_is_sorted(t_stacks *stacks);
int			ft_is_sorted(t_stacks *stacks);

/*--- structures/ ---*/
	/*--- copy.c ---*/
int			*ft_create_copy(t_stacks *stacks);

	/*--- groups.c ---*/
t_groups	*ft_init_groups_100(t_stacks *stacks);
t_groups	*ft_init_groups_500(t_stacks *stacks);
t_groups	*ft_init_first_group(t_stacks *stacks);
void		ft_free_groups(t_groups *group);

	/*--- list.c ---*/
char		**ft_create_list(int argc, char **argv);
void		ft_free_list(char **list);
int			ft_count_index(char **list);

	/*--- stacks.c ---*/
t_stacks	*ft_init_struct(char **list);
void		ft_free_struct(t_stacks *stacks);

#endif
