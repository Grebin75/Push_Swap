/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:20:03 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/10/03 16:42:31 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

// Shift up all nodes by 1 on list a.
// The first element becomes the last one.
void	ra(t_list **a, int true)
{
	t_list	*temp;

	if (!*a || !(*a)->next)
		return ;
	temp = *a;
	*a = temp->next;
	lastnode(*a)->next = temp;
	temp->next = NULL;
	if (true)
	write(1, "ra\n", 3);
}


// Shift up all nodes by 1 on list b.
// The first element becomes the last one.
void	rb(t_list **b, int true)
{
	int	temp;

	temp = (*b)->data;
	rmnode(b, 0);
	addtolast(b, createnode(temp));
	if (true)
		write(1, "rb\n", 3);
}

// Shift up all nodes by 1 on both lists.
// The first element becomes the last one.
void	rr(t_list **a, t_list **b)
{
	ra(a, 0);
	rb(b, 0);
	write(1, "rr\n", 3);
}
