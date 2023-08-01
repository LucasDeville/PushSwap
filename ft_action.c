/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:20:43 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/01 15:39:26 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sa(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[0])
		return ;
	tmp = lists[0]->next;
	if (!tmp)
		return ;
	lists[0]->next = tmp->next;
	tmp->next = lists[0];
	lists[0] = tmp;
	ft_printf("sa\n");
}

void	ft_sb(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[1])
		return ;
	tmp = lists[1]->next;
	if (!tmp)
		return ;
	lists[1]->next = tmp->next;
	tmp->next = lists[1];
	lists[1] = tmp;
	ft_printf("sb\n");
}

void	ft_ss(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[0] || !lists[1])
		return ;
	tmp = lists[0]->next;
	if (!tmp)
		return ;
	lists[0]->next = tmp->next;
	tmp->next = lists[0];
	lists[0] = tmp;
	tmp = lists[1]->next;
	if (!tmp)
		return ;
	lists[1]->next = tmp->next;
	tmp->next = lists[1];
	lists[1] = tmp;
	ft_printf("ss\n");
}

void	ft_pa(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[1])
		return ;
	tmp = lists[1];
	lists[1] = lists[1]->next;
	if (!tmp)
		return ;
	tmp->next = lists[0];
	lists[0] = tmp;
	ft_printf("pa\n");
}

void	ft_pb(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[0])
		return ;
	tmp = lists[0];
	lists[0] = lists[0]->next;
	if (!tmp)
		return ;
	tmp->next = lists[1];
	lists[1] = tmp;
	ft_printf("pb\n");
}
