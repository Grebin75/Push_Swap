/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:58:57 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/10/07 17:58:27 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	checkdata(t_list *a, int *min, int *max)
{
	t_list *temp;

	temp = a;
	while (temp->next)
	{
		if (temp->data)
		temp = temp->next;
	}
}

void	sort2(t_list **a)
{
	if ((*a)->data > (*a)->next->data)
		sa(a, 1);
}

void	sort3(t_list **a)
{
	if (node(*a, 1)->data > (*a)->data && node(*a, 1)->data > node(*a, 2)->data)
		rra(a, 1);
	if ((*a)->data > node(*a, 1)->data && (*a)->data > node(*a, 2)->data)
		ra(a, 1);
	if (((*a)->data > node(*a, 1)->data))
		sa(a, 1);
}

void	sort4(t_list **a, t_list **b)
{
	t_list *t;

	t = *a;
	while (!checkdata(t))
	{
		ra(a, 1);
		t = *a;
	}
	pb(b, a, 1);
	sort3(a);
	pa(a, b, 1);
	if ((*a)->data > (*a)->next->data)
		ra(a, 1);
}

void	sort5(t_list **a, t_list **b)
{
	t_list *t;

	t = *a;
	while (!node(*b, 1))
	{
		if (checkdata(t))
			pb(b, a, 1);
		ra(a, 1);
		t = *a;
	}
	sort3(a);
	if ((*b)->data < node(*b, 1)->data)
		sb(b, 1);
	while (*b)
	{
		pa(a, b, 1);
		if ((*a)->data > node(*a, 1)->data)
			ra(a, 1);
		
	}
}