/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listutils_02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:13:43 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/10/03 15:37:16 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

// Return the amount of nodes.
int	listsize(t_list *list)
{
	int		i;

	i = 0;
	while (list->next && ++i)
		list = list->next;
	return (++i);
}

// Return obj on n position, return *list if n node dont exist.
t_list	*selectnode(t_list *list, int n)
{
	t_list	*temp;

	temp = list;
	if (n < 0 && !temp)
		return (NULL);
	while (temp && n--)
		temp = temp->next;
	return (temp);
}

// Return last node if dont exist any node return NULL.
t_list	*lastnode(t_list *list)
{
	t_list	*temp;

	if (!list)
		return (NULL);
	temp = list;
	while (temp->next)
		temp = temp->next;
	return (temp);
}
