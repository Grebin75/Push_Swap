/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:44:54 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/09/28 16:41:43 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define	PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef	struct	s_list t_list;

struct s_list
{
	int		data;
	t_list	*next;
};

// PUSH
void	pa(t_list **a, t_list **b);
void	pb(t_list **b, t_list **a);

// SWAP
void	sa(t_list **list);
void	sb(t_list **list);
void	ss(t_list **a, t_list **b);

// LIST
t_list	*createnode(int data);
t_list	*addtolast(t_list **list, t_list *new);
t_list	*addtostart(t_list **list, t_list *new);
#endif
