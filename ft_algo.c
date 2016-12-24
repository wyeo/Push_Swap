/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 18:58:33 by wyeo              #+#    #+#             */
/*   Updated: 2015/03/27 10:01:36 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		little_element_pos(t_liste *liste)
{
	int				i;
	int				low;
	int				pos;
	t_element		*courant;

	i = 1;
	pos = 0;
	low = liste->first->val;
	courant = liste->first;
	while (courant != NULL)
	{
		if (courant->val < low)
		{
			low = courant->val;
			pos = i;
		}
		courant = courant->next;
		i += 1;
	}
	return (pos);
}

int		where(t_liste *pile_a, t_liste *pile_b, t_opt *state)
{
	int			i;
	int			nb;
	int			len;

	nb = 0;
	len = pile_a->len;
	while (len != 0)
	{
		i = little_element_pos(pile_a);
		if (i <= (pile_a->len / 2))
		{
			if (state->v_debug == 1)
			{
				v_option(pile_a, pile_b);
				ft_putchar('\n');
			}
			algo_1(pile_a, pile_b, state);
			nb += 2;
		}
		else
			nb = s(nb, pile_a, pile_b, state);
		len -= 1;
	}
	nb = end(nb, pile_a, pile_b, state);
	return (nb);
}

void	algo_1(t_liste *pile_a, t_liste *pile_b, t_opt *state)
{
	int		i;
	int		pos_min;

	pos_min = little_element_pos(pile_a);
	i = 0;
	while (i < pos_min - 1)
	{
		ft_reverse_rotate_a(pile_a, state);
		i += 1;
	}
	ft_pb(pile_a, pile_b, state);
}

void	algo_2(t_liste *pile_a, t_liste *pile_b, t_opt *state)
{
	int		i;
	int		pos_min;

	pos_min = little_element_pos(pile_a);
	i = 0;
	while (i < pile_a->len - pos_min + 1)
	{
		ft_rotate_a(pile_a, state);
		i += 1;
	}
	ft_pb(pile_a, pile_b, state);
}

void	v_option(t_liste *pile_a, t_liste *pile_b)
{
	if (pile_b->len != 0)
		ft_putchar('\n');
	ft_affiche_liste(pile_a, pile_b);
}
