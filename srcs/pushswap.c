/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:51:46 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/10/03 17:18:55 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	main(void)
{
	t_list *a, *b;
	int i = -1;
	a = NULL;
	b = NULL;
	(void)b;
	while (0 && ++i < 100)
		printf("NODE: %i\n", addtolast(&a, createnode(i))->data);
	addtolast(&a, createnode(6));
	addtolast(&a, createnode(12));
	addtolast(&a, createnode(147));
	addtolast(&a, createnode(234));
	printf("%i\n", listsize(a));
	printf("FIRST: %i\n", selectnode(a, 0)->data);
	printf("SECOND: %i\n", selectnode(a, 1)->data);
	printf("THIRD: %i\n", selectnode(a, 2)->data);
	printf("LAST: %i\n", lastnode(a)->data);
	rra(&a, 1);
	printf("FIRST AFTER RRA: %i\n", selectnode(a, 0)->data);
	printf("SECOND AFTER RRA: %i\n", selectnode(a, 1)->data);
	printf("THIRD AFTER RRA: %i\n", selectnode(a, 2)->data);
	printf("LAST AFTER RRA: %i\n", lastnode(a)->data);
	//printf("FIRST: %i, SECOND: %i" ,selectnode(a, 0), );
	rmlist(&a);
}
