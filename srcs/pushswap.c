/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:51:46 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/10/10 15:44:33 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	exitprog(int n)
{
	if (n)
		write(2, "Error\n", 7);
	rmlist(stack(0));
	rmlist(stack(1));
	exit (0);
}

t_list	**stack(char c)
{
	static t_stack	stack;

	if (c == 0)
		return (&stack.a);
	if (c == 1)
		return (&stack.b);
	return (NULL);
}

int	main(int argc, char **argv)
{
	int		i;
	t_list	*a;

	(void)argc;
	i = 0;
	while (argv[++i])
		checkargs(argv[i]);
	if (listsize(*stack(0)) < 2)
		exitprog(0);
	if (listsize(*stack(0)) == 2)
		sort2(stack(0));
	if (listsize(*stack(0)) == 3)
		sort3(stack(0));
	if (listsize(*stack(0)) == 4)
		sort4(stack(0), stack(1));
	if (listsize(*stack(0)) == 5)
		sort5(stack(0), stack(1));
	a = *stack(0);
	while (a)
	{
		printf("%i\n", a->data);
		a = a->next;
	}
	/* if (listsize(*stack(0)) == 3)
		bigsort(*stack(0), *stack(1)); */
	exitprog(0);
}
