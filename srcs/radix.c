/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:13:17 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/10/10 16:59:13 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	getmaxdigit(t_list	**a)
{
	t_list *t;
	int	max;
	int	digit;

	digit = 0;
	max = INT_MIN;
	t = *a;
	while (t)
	{
		if (max < t->data)
			max = t->data;
		t = t->next;
	}
	while (max / 10 && ++digit)
		max /= 10;
	return (++digit);
}

int	getmax(t_list **a, int max, int digit)
{
	t_list *t;

	t = *a;
	max = INT_MIN;
	while (t)
	{
		if ((max % digit) < t->data)
			max = t->data % digit;
		t = t->next;
	}
	return (max);
}

void	radix(t_list **a, t_list **b)
{
	int	rolls;
	int	digit;
	int	max;

	digit = 1;
	(void)b;
	rolls = getmaxdigit(a);
	printf("Digit: %i\n", rolls);
	getmaxdigit(a);
	printf("Max: %i\n", max);
	//printf("DATA B: %i", (*stack(1))->data);
}
