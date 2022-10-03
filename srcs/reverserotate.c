/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:49:24 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/10/03 17:18:40 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

// Shift down all nodes of list a by 1.
// The last node becomes the first one.
void	rra(t_list **a, int true)
{
	t_list	*temp;

	if (!*a || !(*a)->next)
		return ;
	temp = selectnode(*a, listsize(*a) - 2);
	temp->next->next = *a;
	*a = temp->next;
	temp->next = NULL;
	if (true)
		write(1, "rra\n", 4);
}

// Shift down all nodes of list b by 1.
// The last node becomes the first one.
void	rrb(t_list **b, int true)
{
	(void)b;
	(void)true;
/*
	if (true)
		write(1, "rrb\n", 4); */
}

// Shift down all nodes of both lists by 1.
// The last node becomes the first one.
void	rrr(t_list **a, t_list **b)
{
	rra(a, 0);
	rrb(b, 0);
	write (1, "rrr\n", 4);
}
