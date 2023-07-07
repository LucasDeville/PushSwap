/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:37:42 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/03 14:41:40 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H

#include "ft_printf/ft_printf.h"
#include "ft_printf/libft/libft.h"

typedef s_list {
    int     value;
    t_list  next;
}   t_list;


void	ft_algo(int *a, int *b, int max);
int     ft_check_duplicate(int *a);

void    ft_sa(int *a, int max);
void    ft_sb(int *b, int max);
void    ft_ss(t_lists **lists);
void    ft_pa(t_lists **lists);
void    ft_pb(t_lists **lists);
void	ft_ra(int *a, int index);
void	ft_rb(int *b, int index);
void	ft_rr(t_lists **lists);
void	ft_rra(int *a, int index);
void	ft_rrb(int *b, int index);
void	ft_rrr(t_lists **lists);

#endif
