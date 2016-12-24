/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 08:32:27 by wyeo              #+#    #+#             */
/*   Updated: 2015/04/02 10:24:06 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_check_int(char *argv)
{
	int		val;

	val = ft_atoi(argv);
	if (ft_strequ(ft_itoa(val), argv) == 0)
	{
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	return (0);
}

int		ft_check_doublon(t_liste liste)
{
	t_element		*courant;
	t_element		*courant_next;

	courant = liste.first;
	while (courant != NULL)
	{
		courant_next = courant->next;
		while (courant_next != NULL)
		{
			if (courant_next->val == courant->val)
			{
				ft_putendl_fd("Error", 2);
				return (-1);
			}
			courant_next = courant_next->next;
		}
		courant = courant->next;
	}
	return (0);
}

int		ft_check_options(char **argv, t_opt *my_options)
{
	int			i;
	int			j;

	i = 1;
	j = 0;
	i = ft_nothing(my_options, argv, i, j);
	return (i);
}

int		ft_check_params(char *argv)
{
	int		i;

	i = 0;
	if (ft_check_int(argv) == -1)
		return (-1);
	while (argv[i] != '\0')
	{
		if (argv[i] == '-')
			i += 1;
		if (!(argv[i] >= '0' && argv[i] <= '9'))
		{
			ft_putendl_fd("Error", 2);
			return (-1);
		}
		i += 1;
	}
	return (0);
}
