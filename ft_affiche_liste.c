/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affiche_liste.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 08:11:50 by wyeo              #+#    #+#             */
/*   Updated: 2015/03/27 09:54:27 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_mini_affiche_liste(t_liste *pile)
{
	if (pile->first != NULL)
		ft_putchar(' ');
}

void	ft_affiche_liste(t_liste *pile_a, t_liste *pile_b)
{
	t_element		*courant;

	courant = pile_a->first;
	ft_putstr("Pile a :");
	ft_mini_affiche_liste(pile_a);
	while (courant != NULL)
	{
		ft_putnbr(courant->val);
		if (courant->next != NULL)
			ft_putchar(' ');
		courant = courant->next;
	}
	ft_putchar('\n');
	courant = pile_b->first;
	ft_putstr("Pile b :");
	ft_mini_affiche_liste(pile_b);
	while (courant != NULL)
	{
		ft_putnbr(courant->val);
		if (courant->next != NULL)
			ft_putchar(' ');
		courant = courant->next;
	}
	ft_putchar('\n');
}
