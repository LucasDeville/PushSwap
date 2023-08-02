/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:50:11 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/02 18:21:21 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_ra(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[0] || !lists[0]->next)
		return ;
	tmp = ft_last_lists(lists[0]);
	tmp->next = lists[0];
	lists[0] = lists[0]->next; 
	tmp = tmp->next;
	tmp->next = NULL;
	ft_printf("ra\n");
}

void	ft_rb(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[1] || !lists[1]->next)
		return ;
	tmp = ft_last_lists(lists[1]);
	tmp->next = lists[1];
	lists[1] = lists[1]->next; 
	tmp = tmp->next;
	tmp->next = NULL;
	ft_printf("rb\n");
}

void	ft_rr(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[0] || !lists[0]->next)
		return ;
	tmp = ft_last_lists(lists[0]);
	tmp->next = lists[0];
	lists[0] = lists[0]->next; 
	tmp = tmp->next;
	tmp->next = NULL;
	if (!lists[1] || !lists[1]->next)
		return ;
	tmp = ft_last_lists(lists[1]);
	tmp->next = lists[1];
	lists[1] = lists[1]->next; 
	tmp = tmp->next;
	tmp->next = NULL;
	ft_printf("rr\n");
}

void	ft_rra(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[0] || !lists[0]->next)
		return ;
	tmp = ft_last_lists(lists[0]);
	tmp->next = lists[0];
	lists[0] = tmp;
	while (tmp->next != lists[0])
		tmp = tmp->next;
	tmp->next = NULL;
	ft_printf("rra\n");
}

void	ft_rrb(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[1] || !lists[1]->next)
		return ;
	tmp = ft_last_lists(lists[1]);
	tmp->next = lists[1];
	lists[1] = tmp;
	while (tmp->next != lists[1])
		tmp = tmp->next;
	tmp->next = NULL;
	ft_printf("rrb\n");
}
