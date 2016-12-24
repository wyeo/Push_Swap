/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 07:47:20 by wyeo              #+#    #+#             */
/*   Updated: 2015/04/02 03:20:05 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_add_elem(t_liste *liste, int nb)
{
	t_element		*nouveau;

	if ((nouveau = (t_element *)malloc(sizeof(t_element))) == NULL)
		return (-1);
	nouveau->val = nb;
	nouveau->next = NULL;
	nouveau->prev = NULL;
	if (liste->first)
	{
		liste->first->prev = nouveau;
		nouveau->next = liste->first;
	}
	else
		liste->end = nouveau;
	liste->first = nouveau;
	liste->len++;
	return (0);
}

int		ft_add_end_elem(t_liste *liste, int nb)
{
	t_element		*courant;
	t_element		*nouveau;

	courant = ft_get_end_elem(liste);
	liste->end = courant;
	if ((nouveau = (t_element *)malloc(sizeof(t_element))) == NULL)
		return (-1);
	nouveau->val = nb;
	nouveau->next = NULL;
	nouveau->prev = liste->end;
	liste->end->next = nouveau;
	liste->end = nouveau;
	liste->len++;
	return (0);
}

int		ft_del_end_elem(t_liste *liste)
{
	t_element		*supp;

	if (liste->len == 0)
		return (-1);
	supp = liste->end;
	liste->end->prev->next = NULL;
	liste->end = liste->end->next;
	liste->len--;
	free(supp);
	return (0);
}

int		ft_del_first_elem(t_liste *liste)
{
	t_element		*supp;

	if (liste->len == 0)
		return (-1);
	supp = liste->first;
	liste->first->next->prev = NULL;
	liste->first = liste->first->prev;
	liste->len--;
	free(supp);
	return (0);
}
