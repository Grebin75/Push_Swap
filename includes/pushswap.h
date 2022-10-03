/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoutinh <hcoutinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:44:54 by hcoutinh          #+#    #+#             */
/*   Updated: 2022/10/03 15:57:15 by hcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "lists.h"

// PUSH
void	pa(t_list **a, t_list **b, int true);
void	pb(t_list **b, t_list **a, int true);

// SWAP
void	sa(t_list **list, int true);
void	sb(t_list **list, int true);
void	ss(t_list **a, t_list **b);

// ROTATE
void	ra(t_list **a, int true);
void	rb(t_list **b, int true);
void	rr(t_list **a, t_list **b);

// REVERSE ROTATE
void	rra(t_list **a, int true);
void	rrb(t_list **b, int true);
void	rrr(t_list **a, t_list **b);
#endif
