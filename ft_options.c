/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/26 04:28:29 by wyeo              #+#    #+#             */
/*   Updated: 2015/04/30 19:54:57 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	option_l(t_liste *pile_a)
{
	ft_putnbr(pile_a->len);
	ft_putchar('\n');
}

void	option_b(int nb)
{
	ft_putnbr(nb);
	ft_putchar('\n');
}

void	option_a(t_liste *pile_a)
{
	t_element		*courant;

	courant = pile_a->first;
	while (courant != NULL)
	{
		ft_putnbr(courant->val);
		if (courant->next != NULL)
			ft_putchar(' ');
		courant = courant->next;
	}
}

void	option_d(void)
{
	ft_putendl("rra: Prend le sommet de la pile_a pour l'envoyer au fond");
	ft_putendl("rrb: Prend le sommet de la pile_b pour l'envoyer au fond");
	ft_putendl("rrr: Execute rra && rrb");
	ft_putendl("ra: Prend le fond de la pile_a pour l'envoyer au sommet");
	ft_putendl("rb: Prend le fond de la pile_b pour l'envoyer au fond");
	ft_putendl("pa: Prend le sommet de la pile_a et l'envoie sur la pile_b");
	ft_putendl("pb: Prend le sommet de la pile_a et l'envoie sur la pile_a");
	ft_putendl("sa: Intervertit les deux premiers au sommet de la pile_a");
	ft_putendl("sb: Intervertit les deux premiers au sommet de la pile_b");
	ft_putendl("ss: Execute sa && sb");
}

void	ft_options(t_opt *state, t_liste *pile_a, int nb)
{
	if (state->l_nb_elem == 1)
		option_l(pile_a);
	if (state->b_nb_operation == 1)
		option_b(nb);
	if (state->a_pile_a == 1)
		option_a(pile_a);
	if (state->d_def == 1)
		option_d();
}
