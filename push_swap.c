/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 08:07:31 by wyeo              #+#    #+#             */
/*   Updated: 2015/04/19 03:06:07 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	int			nb;
	int			ac;
	t_liste		pile_a;
	t_liste		pile_b;
	t_opt		my_options;

	ac = (argc - 1);
	nb = 0;
	if (argc <= 2)
		return (-1);
	init_1(&pile_a, &pile_b, &my_options);
	while (ac >= ft_check_options(argv, &my_options))
	{
		if (ft_check_params(argv[ac]) == -1)
			return (-1);
		ft_add_elem(&pile_a, ft_atoi(argv[ac]));
		ac -= 1;
	}
	if (ft_check_doublon(pile_a) == -1)
		return (-1);
	if (ft_case(&pile_a, &my_options, ft_get_end_elem(&pile_a)) == -1)
		return (-1);
	if (ft_sort(&pile_a) == -1)
		ft_what(&pile_a, &pile_b, &my_options, nb);
	return (0);
}
