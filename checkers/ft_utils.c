/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:42:57 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/09 13:45:48 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_lists	*ft_last_lists(t_lists *lists)
{
	while (lists->next)
		lists = lists->next;
	return (lists);
}

int	ft_argv_size(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

t_lists	*ft_create_chain(int nb, char **str, int min)
{
	t_lists	*a;
	t_lists	*tmp;

	tmp = NULL;
	while (nb >= min)
	{
		a = malloc(sizeof(t_lists));
		a->nb = atoi(str[nb--]);
		a->next = tmp;
		tmp = a;
	}
	return (a);
}

char	*ft_realloc_buff(char *buf, char tmp[1], int btotal)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_calloc(sizeof(char), btotal + 1);
	while (i < btotal)
	{
		if (buf[i] != '\0')
			str[i] = buf[i];
		else
			str[i] = tmp[0];
		i++;
	}
	free(buf);
	return (str);
}

char	*ft_clone_terminal(void)
{
	char	*buf;
	char	tmp[1];
	int		len;

	buf = ft_calloc(sizeof(char), 1);
	len = 0;
	while (read(0, tmp, 1))
	{
		len++;
		buf = ft_realloc_buff(buf, tmp, len);
	}
	return (buf);
}
