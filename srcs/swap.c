/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:34:27 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/10/10 16:49:36 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

// SWAP FIRST VALUE ON A TO SECOND VALUE ON A
void	sa(t_list **list, int true)
{
	if (!*list || !(*list)->next)
		return ;
	(*list)->data ^= (*list)->next->data;
	(*list)->next->data ^= (*list)->data;
	(*list)->data ^= (*list)->next->data;
	if (true)
		write(1, "sa\n", 3);
}

// SWAP FIRST VALUE ON B TO SECOND VALUE ON B
void	sb(t_list **list, int true)
{
	if (!*list || !(*list)->next)
		return ;
	(*list)->data ^= (*list)->next->data;
	(*list)->next->data ^= (*list)->data;
	(*list)->data ^= (*list)->next->data;
	if (true)
		write(1, "sb\n", 3);
}

// SWAP FIRST VALUE TO SECOND VALUE ON BOTH LISTS
void	ss(t_list **a, t_list **b)
{
	sa(a, 0);
	sb(b, 0);
	write(1, "ss\n", 3);
}
