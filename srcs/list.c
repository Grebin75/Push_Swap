/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:44:02 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/09/28 16:41:32 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

t_list	*createnode(int data)
{
	t_list	*objs;

	objs = malloc(sizeof(t_list));
	if (!objs)
		return (NULL);
	objs->data = data;
	objs->next = NULL;
	return (objs);
}

t_list	*addtostart(t_list **list, t_list *new)
{
	if (!new)
		return (NULL);
	if (!list)
		*list = new;
	else
		new->data = *list;
		*list = new;
	return (new);
}
t_list	*addtolast(t_list **list, t_list *new)
{
	t_list	*temp;

	if (list)
	{
		if (*list)
		{
			temp = *list;
			while (temp->next)
				temp = temp->next;
			temp->next = new;
		}
		else
			*list = new;
	}
	return (temp);
}

/* t_list *lastobj(t_list **list)
{
	t_list *temp;

	if(!*list)
		return (NULL);
	temp = *list;
	while (temp->next)
		temp = temp->next;
	return (temp);
} */
