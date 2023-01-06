/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:13:17 by hcoutinh          #+#    #+#             */
/*   Updated: 2023/01/06 12:13:27 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	getmax(t_list *a)
{
	int	max;

	max = a->index;
	while (a)
	{
		if (max < a->index)
			max = a->index;
		a = a->next;
	}
	return (max);
}

void	radix(t_list **a, t_list **b, int mbit)
{
	int		i;
	int		j;
	int		len;
	t_list	*temp;

	temp = *a;
	i = -1;
	len = listsize(*a);
	while (++i < mbit)
	{
		j = -1;
		while (++j < len)
		{
			temp = *a;
			if ((temp->index >> i & 1) == 1)
				ra(a, 1);
			else
				pb(b, a, 1);
		}
		while (listsize(*b))
			pa(a, b, 1);
	}
}

void	get_index(t_list **a)
{
	int		i;
	int		min;
	t_list	*temp;

	i = -1;
	while (++i < listsize(*a))
	{
		temp = *a;
		min = INT_MAX;
		while (temp)
		{
			if (min > temp->data && temp->index == -1)
				min = temp->data;
			temp = temp->next;
		}
		temp = *a;
		while (temp && temp->data != min)
			temp = temp->next;
		temp->index = i;
	}
}

void	bigalgo(t_list **a, t_list **b)
{
	int	mbit;
	int	max;

	(void)b;
	get_index(a);
	max = getmax(*a);
	mbit = -1;
	while (max >> ++mbit)
		;
	radix(a, b, mbit);
}
