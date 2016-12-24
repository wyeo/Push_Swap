/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/26 05:07:33 by wyeo              #+#    #+#             */
/*   Updated: 2015/03/28 22:02:03 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		s(int n, t_liste *pile_a, t_liste *pile_b, t_opt *sat)
{
	if (sat->v_debug == 1)
	{
		v_option(pile_a, pile_b);
		ft_putchar('\n');
	}
	algo_2(pile_a, pile_b, sat);
	n += 2;
	return (n);
}

void	ft_what(t_liste *pa, t_liste *pb, t_opt *s, int nb)
{
	nb = where(pa, pb, s);
	ft_options(s, pa, nb);
}

int		end(int n, t_liste *pile_a, t_liste *pile_b, t_opt *s)
{
	int		i_b;

	i_b = pile_b->len;
	while (i_b)
	{
		n += 1;
		if (i_b > 0)
		{
			ft_pa(pile_a, pile_b, s);
			if (i_b != 1)
				ft_putchar(' ');
			else if (i_b == 1)
				ft_putchar('\n');
		}
		if (s->v_debug == 1)
		{
			v_option(pile_a, pile_b);
			ft_putchar('\n');
		}
		i_b -= 1;
	}
	return (n);
}

int		ft_nothing(t_opt *my_options, char **argv, int i, int j)
{
	while (argv[i][0] == '-' && (argv[i][1] >= 'a' && argv[i][1] <= 'z'))
	{
		j = 1;
		while (argv[i][j])
		{
			if (argv[i][j] == 'c')
				my_options->c_color = 1;
			if (argv[i][j] == 'v')
				my_options->v_debug = 1;
			if (argv[i][j] == 'l')
				my_options->l_nb_elem = 1;
			if (argv[i][j] == 'b')
				my_options->b_nb_operation = 1;
			if (argv[i][j] == 'a')
				my_options->a_pile_a = 1;
			if (argv[i][j] == 'd')
				my_options->d_def = 1;
			j += 1;
		}
		i += 1;
	}
	return (i);
}
