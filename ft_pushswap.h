/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:37:42 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/02 19:03:20 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H

# define INT_MIN "-2147483648" 
# define INT_MAX "2147483647"

# include "ft_printf/ft_printf.h"
# include "ft_printf/libft/libft.h"

typedef struct s_lists
{
	int				nb;
	struct s_lists	*next;
}	t_lists;

typedef struct s_infos
{
	int		min;
	int		max;
	t_lists	*best;
	int		index_best;
	int		index_final;
	int		sizea;
	int		sizeb;
	int		prev;
	int		size_divided;
}	t_infos;

int		ft_check_duplicate(char **str);
t_lists	*ft_last_lists(t_lists *lists);
void	ft_free_lists(t_lists **lists);
void	ft_algo(t_lists **lists);
int		ft_min(t_lists *lists);
int		ft_max(t_lists *lists);
void	ft_sort_3(t_lists **lists);
int		ft_is_sorted(t_lists *lists);
void	ft_sort(t_lists **lists);
int		ft_size(t_lists *lists);
void	ft_free_argv(char **argv);
int		ft_argv_size(char **str);
int		ft_check_max(char **str, int min);
void	ft_push_this(t_lists **lists, t_infos *infos);
void	ft_order_b(t_lists *lists);
t_lists	*ft_get_elt_at(t_lists *list, int i);
int		ft_get_idx(t_lists *lists, t_lists *elt);
int		ft_max_idx(int a, int b);
int		ft_get_final_idx(t_lists *lists, t_lists *elt);
void	ft_back_b(t_lists **lists, t_infos *infos);
int		ft_get_inx_int(t_lists *lists, int i);
void	ft_divided_algo(t_lists **lists, t_infos *infos);
void	ft_back_divided(t_lists **lists, t_infos *infos);
void	ft_first_side(t_lists **lists, t_infos *infos);
void	ft_second_side(t_lists **lists, t_infos *infos);
void	ft_sa(t_lists **lists);
void	ft_sb(t_lists **lists);
void	ft_ss(t_lists **lists);
void	ft_pa(t_lists **lists);
void	ft_pb(t_lists **lists);
void	ft_ra(t_lists **lists);
void	ft_rb(t_lists **lists);
void	ft_rr(t_lists **lists);
void	ft_rra(t_lists **lists);
void	ft_rrb(t_lists **lists);
void	ft_rrr(t_lists **lists);

#endif