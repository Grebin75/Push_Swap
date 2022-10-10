/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:58:57 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/10/10 13:44:06 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	maxmin(t_list *a, int *min, int *max)
{
	t_list *temp;

	temp = a;
	while (temp)
	{
		if (temp->data > *max)
			*max = temp->data;
		if (temp->data < *min)
			*min = temp->data;
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
	int	max;
	int	min;

	min = (*a)->data;
	max = (*a)->data;
	t = *a;
	maxmin(*a, &min, &max);
	while (max != t->data && min != t->data)
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
	int	max;
	int	min;

	(void)b;
	min = (*a)->data;
	max = (*a)->data;
	t = *a;
	maxmin(*a, &min, &max);
	while (!node(*b, 1))
	{
		if (max != t->data && min != t->data)
			ra(a, 1);
		else
			pb(b, a, 1);
		t = *a;
	}
	sort3(a);
	while (node(*b, 0))
	{
		pa(a, b, 1);
		if ((*a)->data > (*a)->next->data)
			ra(a, 1);
	}
}
