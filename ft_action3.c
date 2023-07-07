/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:58:40 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/04 15:32:48 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_rrr(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[0] || !lists[0]->next)
		return ;
	tmp = ft_last_lists(lists[0]);
	tmp->next = lists[0];
	lists[0] = tmp;
	while(tmp->next != lists[0])
		tmp = tmp->next;
	tmp->next = NULL;
	if (!lists[1] || !lists[1]->next)
		return ;
	tmp = ft_last_lists(lists[1]);
	tmp->next = lists[1];
	lists[1] = tmp;
	while(tmp->next != lists[1])
		tmp = tmp->next;
	tmp->next = NULL;
	ft_printf("rrr\n");
}