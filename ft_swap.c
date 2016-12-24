/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 05:16:37 by wyeo              #+#    #+#             */
/*   Updated: 2015/03/27 09:33:49 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sa(t_liste *pile_a, t_opt *state)
{
	t_element		*courant;
	t_element		*courant_after;

	if (pile_a->len)
	{
		courant = pile_a->first;
		courant_after = courant->next;
		if (pile_a->len < 2)
			return (-1);
		ft_ptrswap(&courant->val, &courant_after->val);
		if (state->c_color == 1)
			ft_putstr("\033[34msa\033[0m");
		else
			ft_putstr("sa");
	}
	return (0);
}

int		ft_sb(t_liste *pile_b, t_opt *state)
{
	t_element		*courant;
	t_element		*courant_after;

	if (pile_b->len)
	{
		courant = pile_b->first;
		courant_after = courant->next;
		if (pile_b->len < 2)
			return (-1);
		ft_ptrswap(&courant_after->val, &courant->val);
		if (state->c_color == 1)
			ft_putstr("\033[34;1msb\033[0m");
		else
			ft_putstr("sb");
		ft_putchar(' ');
	}
	return (0);
}

void	ft_ss(t_liste *pile_a, t_liste *pile_b, t_opt *state)
{
	ft_sa(pile_a, state);
	ft_sb(pile_b, state);
	if (state->c_color == 1)
		ft_putstr("\033[34;7mss\033[0m");
	else
		ft_putstr("ss");
	ft_putchar(' ');
}
