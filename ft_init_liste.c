/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_liste.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 08:20:39 by wyeo              #+#    #+#             */
/*   Updated: 2015/03/29 01:28:08 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_1(t_liste *pile_a, t_liste *pile_b, t_opt *opt)
{
	ft_bzero(pile_a, sizeof(t_liste));
	ft_bzero(pile_b, sizeof(t_liste));
	ft_bzero(opt, sizeof(t_opt));
}
