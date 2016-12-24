/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 06:25:23 by wyeo              #+#    #+#             */
/*   Updated: 2015/03/27 09:44:21 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_pa(t_liste *pile_a, t_liste *pile_b, t_opt *state)
{
	if (pile_b->len == 0)
		return (-1);
	ft_add_elem(pile_a, pile_b->first->val);
	ft_del_elem(pile_b);
	if (state->c_color == 1)
		ft_putstr("\033[33;1mpa\033[0m");
	else
		ft_putstr("pa");
	return (0);
}

int		ft_pb(t_liste *pile_a, t_liste *pile_b, t_opt *state)
{
	if (pile_a->len == 0)
		return (-1);
	ft_add_elem(pile_b, pile_a->first->val);
	ft_del_elem(pile_a);
	if (state->c_color == 1)
		ft_putstr("\033[33;7m pb\033[0m");
	else
	{
		ft_putchar(' ');
		ft_putstr("pb");
	}
	ft_putchar(' ');
	return (0);
}
