/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:47:31 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/09/28 16:16:43 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

// PUT FIRST B VALUE ON A START
void	pa(t_list **a, t_list **b)
{
	t_list *temp;

	if (!*b)
		return ;
	temp = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = temp;
	write(1, "pa\n", 3);
}

// PUT FIRST A VALUE ON B START
void	pb(t_list **b, t_list **a)
{
	t_list *temp;

	if (!*a)
		return ;
	temp = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = temp;
	write(1, "pb\n", 3);
}
