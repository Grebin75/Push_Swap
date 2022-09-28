/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:51:46 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/09/28 16:31:17 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int	main(void)
{
	t_list *a, *b;
	int i = 0;
	a = NULL;
	b = NULL;
	(void)b;
	while (++i < 99)
		addtolist(&a, createnode(i));
	printf("%i\n",lastobj(&a)->data);
}
