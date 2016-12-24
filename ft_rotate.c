/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 07:59:07 by wyeo              #+#    #+#             */
/*   Updated: 2015/03/27 09:30:45 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_element		*ft_get_end_elem(t_liste *liste)
{
	t_element		*courant;

	courant = liste->first;
	while (courant->next != NULL)
		courant = courant->next;
	return (courant);
}

int				ft_rotate_a(t_liste *pile_a, t_opt *state)
{
	t_element		*courant;

	if (pile_a->len <= 1)
		return (-1);
	courant = pile_a->end;
	ft_add_elem(pile_a, courant->val);
	ft_del_end_elem(pile_a);
	pile_a->end = ft_get_end_elem(pile_a);
	if (state->c_color == 1)
		ft_putstr("\033[32mra\033[0m");
	else
		ft_putstr("ra");
	ft_putchar(' ');
	return (0);
}

int				ft_rotate_b(t_liste *pile_b, t_opt *state)
{
	t_element		*courant;

	if (pile_b->len <= 1)
		return (-1);
	courant = pile_b->end;
	ft_add_elem(pile_b, courant->val);
	ft_del_end_elem(pile_b);
	pile_b->end = ft_get_end_elem(pile_b);
	if (state->c_color == 1)
		ft_putstr("\033[32;1mrb\033[0m");
	else
		ft_putstr("rb");
	ft_putchar(' ');
	return (0);
}

void			ft_rr(t_liste *pile_a, t_liste *pile_b, t_opt *state)
{
	ft_rotate_a(pile_a, state);
	ft_rotate_b(pile_b, state);
	if (state->c_color == 1)
		ft_putstr("\033[32;7mrr\033[0m");
	else
		ft_putstr("rr");
	ft_putchar(' ');
}
