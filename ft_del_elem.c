/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 07:48:21 by wyeo              #+#    #+#             */
/*   Updated: 2015/02/26 07:48:27 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_del_elem(t_liste *liste)
{
	t_element	*supp_elem;

	if (liste->len == 0)
		return (-1);
	supp_elem = liste->first;
	liste->first = liste->first->next;
	free(supp_elem);
	liste->len--;
	return (0);
}
