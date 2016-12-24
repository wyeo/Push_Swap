/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/13 01:50:05 by wyeo              #+#    #+#             */
/*   Updated: 2015/03/27 09:37:23 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_reverse_rotate_a(t_liste *pile_a, t_opt *state)
{
	t_element		*courant;

	courant = pile_a->first;
	if (pile_a->len <= 1)
		return (-1);
	ft_add_end_elem(pile_a, pile_a->first->val);
	ft_del_first_elem(pile_a);
	pile_a->first = courant->next;
	pile_a->end = ft_get_end_elem(pile_a);
	if (state->c_color == 1)
		ft_putstr("\033[31mrra\033[0m");
	else
		ft_putstr("rra");
	return (0);
}

int		ft_reverse_rotate_b(t_liste *pile_b, t_opt *state)
{
	t_element		*courant;

	courant = pile_b->first;
	if (pile_b->len <= 1)
		return (-1);
	ft_add_end_elem(pile_b, pile_b->first->val);
	ft_del_first_elem(pile_b);
	pile_b->first = courant->next;
	pile_b->end = ft_get_end_elem(pile_b);
	if (state->c_color == 1)
		ft_putstr("\033[31;1mrrb\033[0m");
	else
		ft_putstr("rrb");
	ft_putchar(' ');
	return (0);
}

void	ft_rrr(t_liste *pile_a, t_liste *pile_b, t_opt *state)
{
	ft_reverse_rotate_a(pile_a, state);
	ft_reverse_rotate_b(pile_b, state);
	if (state->c_color == 1)
		ft_putstr("\033[31;4mrrr\033[0m");
	else
		ft_putstr("rrr");
	ft_putchar(' ');
}
