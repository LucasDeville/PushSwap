/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:37:42 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/15 16:28:05 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# define INT_MIN "-2147483648" 
# define INT_MAX "2147483647"

# include "../ft_printf/ft_printf.h"
# include "../ft_printf/libft/libft.h"

typedef struct s_lists
{
	int				nb;
	struct s_lists	*next;
}	t_lists;

void	ft_free_lists(t_lists **lists);
int		ft_argv_size(char **str);
char	*ft_clone_terminal(void);
char	*ft_realloc_buff(char *buf, char tmp[1], int btotal);
t_lists	*ft_create_chain(int nb, char **str, int min);
t_lists	*ft_last_lists(t_lists *lists);
int		ft_argv_size(char **str);
int		ft_check(char **argv, int min, int a);
void	ft_exit(t_lists **lists, char **argv, int a);
void	ft_free_argv(char **argv);
void	ft_checker(char *str, t_lists **lists, int i);
int		ft_is_sorted(t_lists **lists);
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