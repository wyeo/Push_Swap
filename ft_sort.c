/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 08:01:54 by wyeo              #+#    #+#             */
/*   Updated: 2015/03/29 01:25:40 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort(t_liste *pile_a)
{
	int			i;
	t_element	*courant;

	i = 0;
	courant = pile_a->first;
	if (!courant)
		return (-1);
	while (courant->next != NULL)
	{
		if (courant->val < courant->next->val)
			i = 1;
		else
			return (-1);
		courant = courant->next;
	}
	return (i);
}

int		ft_sort_inv(t_liste *pile_a)
{
	int			i;
	t_element	*courant;

	i = 0;
	courant = pile_a->first;
	if (!courant)
		return (-1);
	while (courant->next)
	{
		if (courant->val > courant->next->val)
			i = 1;
		else
			return (-1);
		courant = courant->next;
	}
	return (i);
}

int		ft_sort_before_end(t_element *courant)
{
	courant = courant->prev;
	if (!courant)
		return (-1);
	while (courant != NULL)
	{
		if (courant->prev == NULL)
			return (0);
		if (courant->val < courant->prev->val)
			return (-1);
		courant = courant->prev;
	}
	return (0);
}

int		r_first(t_liste *pile_a)
{
	t_element		*courant;

	courant = pile_a->first->next;
	if (!courant)
		return (-1);
	while (courant != NULL)
	{
		if (courant->next == NULL)
			return (0);
		if (courant->val > courant->next->val)
			return (-1);
		courant = courant->next;
	}
	return (0);
}
