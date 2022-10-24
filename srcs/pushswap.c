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

	(void)argc;
	i = 0;
	while (argv[++i])
		checkargs(argv[i]);
	exitprog(0);
}
