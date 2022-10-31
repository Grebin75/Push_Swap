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

int	ft_atoi(char **num)
{
	long	n;
	int		neg;

	neg = (**num != '-') -(**num == '-');
	n = 0;
	if (**num == '-' || **num == '+')
		(*num) += 1;
	while ((**num >= '0' && **num <= '9'))
	{
		n = (n * 10) + (neg * (**num - '0'));
		(*num) += 1;
		if (n < -2147483648 || n > 2147483647)
			exitprog(1);
	}
	if (**num && (**num != 9 && **num != 10 && **num != 11
			&& **num != 12 && **num != 13 && **num != 32))
		exitprog(1);
	return (n);
}

void	checkargs(char *args)
{
	int	n;

	if (!*args)
		exitprog(1);
	while (args && *args)
	{
		while ((*args > 8 && *args < 14) || *args == ' ')
			args++;
		if ((*args == '+' || *args == '-') && \
		(*(args + 1) < '0' || *(args + 1) > '9'))
			exitprog(1);
		n = ft_atoi(&args);
		if (checkdupe(n, (*stack(0))))
			exitprog(1);
		addtolast(stack(0), createnode(n));
	}
}
