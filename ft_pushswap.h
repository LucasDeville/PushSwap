/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:37:42 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/07 14:05:10 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H

#define FT_RA   0
#define FT_RB   1
#define FT_RRA   2
#define FT_RRB   3

#include "ft_printf/ft_printf.h"
#include "ft_printf/libft/libft.h"

typedef struct s_lists
{
    int     nb;
    struct s_lists  *next;
}   t_lists;

typedef struct s_infos
{
    int min;
    int max;
    t_lists *best;
    int index_best;
    int index_final;
    int sizea;
    int sizeb;
    int prev;
}   t_infos;

int ft_check_duplicate(char **str);
t_lists *ft_last_lists(t_lists *lists);
void    ft_free_lists(t_lists **lists);
void    ft_algo(int nb, t_lists **lists);
int ft_min(t_lists *lists);
int ft_max(t_lists *lists);
void    ft_sort_3(t_lists **lists);
int ft_is_sorted(t_lists *lists);
void    ft_sort(t_lists **lists);
int ft_size(t_lists *lists);

void    ft_sa(t_lists **lists);
void    ft_sb(t_lists **lists);
void    ft_ss(t_lists **lists);
void    ft_pa(t_lists **lists);
void    ft_pb(t_lists **lists);
void	ft_ra(t_lists **lists);
void	ft_rb(t_lists **lists);
void	ft_rr(t_lists **lists);
void	ft_rra(t_lists **lists);
void	ft_rrb(t_lists **lists);
void	ft_rrr(t_lists **lists);

#endif