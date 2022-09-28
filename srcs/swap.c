/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:34:27 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/09/28 16:06:54 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

// SWAP FIRST VALUE ON A TO SECOND VALUE ON A
void	sa(t_list **list)
{
	t_list	*temp;

	if (!*list || !(*list)->next)
		return ;
	temp = (*list)->next;
	(*list)->next = temp->next;
	temp->next = (*list);
	(*list) = temp;
	write(1, "sa\n", 3);
}

// SWAP FIRST VALUE ON B TO SECOND VALUE ON B
void	sb(t_list **list)
{
	t_list	*temp;

	if (!*list || !(*list)->next)
		return ;
	temp = (*list)->next;
	(*list)->next = temp->next;
	temp->next = (*list);
	(*list) = temp;
	write(1, "sb\n", 3);
}

// SWAP FIRST VALUE TO SECOND VALUE ON BOTH LISTS
void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}
