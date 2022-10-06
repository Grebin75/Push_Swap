/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwutils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:37:38 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/10/06 15:40:22 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	checkdupe(int n, t_list *stack)
{
	t_list	*temp;

	temp = stack;
	while (temp && temp->next)
	{
		if (temp->data == n)
			return (1);
		temp = temp->next;
	}
	return (0);
}

int	argreader(char *num)
{
	int		i;
	long	n;
	int		neg;

	neg = (num[0] != '-') -(num[0] == '-');
	n = 0;
	i = -1;
	while (num[++i])
	{
		if (i == 0 && (num[i] == '-' || num[i] == '+'))
			i++;
		if ((num[i] >= '0' && num[i] <= '9'))
			n = (n * 10) + (neg * (num[i] - '0'));
		else
			exitprog(1);
	}
	if (n < -2147483648 || n > 2147483647)
		exitprog(1);
	if (checkdupe(n, (*stack(0))))
		exitprog(1);
	return (n);
}
