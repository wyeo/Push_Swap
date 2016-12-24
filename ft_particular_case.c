/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_particular_case.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 06:50:28 by wyeo              #+#    #+#             */
/*   Updated: 2015/04/19 03:04:34 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_simple_one(t_liste *pile_a, t_opt *state)
{
	if (pile_a->len == 3 && ft_sort_inv(pile_a) == 1)
	{
		ft_reverse_rotate_a(pile_a, state);
		ft_putchar(' ');
		ft_sa(pile_a, state);
		ft_putchar('\n');
		return (1);
	}
	return (0);
}

int		ft_simple_two(t_liste *pile_a, t_opt *state)
{
	t_element		*courant;

	courant = pile_a->first;
	if (!courant || !courant->next)
		return (-1);
	if (r_first(pile_a) == -1 && pile_a->first->val > pile_a->first->next->val)
		return (-1);
	if (courant->val > courant->next->val)
	{
		ft_sa(pile_a, state);
		ft_putchar('\n');
		return (1);
	}
	return (0);
}

int		ft_simple_three(t_liste *pa, t_opt *st, t_element *co)
{
	if (!co)
		return (-1);
	if (ft_sort_before_end(co) == -1)
		return (-1);
	if (co->val < co->prev->val)
	{
		ft_rotate_a(pa, st);
		ft_rotate_a(pa, st);
		ft_sa(pa, st);
		ft_putchar(' ');
		ft_reverse_rotate_a(pa, st);
		ft_putchar(' ');
		ft_reverse_rotate_a(pa, st);
		ft_putchar('\n');
		return (1);
	}
	return (0);
}

int		ft_case(t_liste *pa, t_opt *st, t_element *co)
{
	if (ft_simple_one(pa, st) == 1)
		return (-1);
	if (ft_simple_two(pa, st) == 1)
		return (-1);
	if (ft_simple_three(pa, st, co) == 1)
		return (-1);
	return (0);
}
