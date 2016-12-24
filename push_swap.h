/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 07:56:36 by wyeo              #+#    #+#             */
/*   Updated: 2015/04/19 03:03:30 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "./libft.h"

typedef struct			s_element
{
	int					val;
	struct s_element	*prev;
	struct s_element	*next;
}						t_element;

typedef struct			s_liste
{
	t_element			*first;
	t_element			*end;
	int					len;
}						t_liste;

typedef struct			s_opt
{
	int					c_color;
	int					v_debug;
	int					l_nb_elem;
	int					b_nb_operation;
	int					a_pile_a;
	int					d_def;
}						t_opt;

void					init_1(t_liste *pile_a, t_liste *pile_b, t_opt *opt);
int						ft_add_elem(t_liste *liste, int nb);
int						ft_add_end_elem(t_liste *liste, int nb);
int						ft_del_first_elem(t_liste *liste);
int						ft_del_end_elem(t_liste *liste);
int						ft_del_elem(t_liste *liste);
void					ft_mini_affiche_liste(t_liste *pile);
void					ft_affiche_liste(t_liste *pile_a, t_liste *pile_b);
void					init(t_liste *liste);

int						ft_check_int(char *argv);
int						ft_check_params(char *argv);
int						ft_check_doublon(t_liste liste);
int						ft_check_options(char **argv, t_opt *my_opt);

int						ft_sa(t_liste *pile_a, t_opt *state);
int						ft_sb(t_liste *pile_b, t_opt *state);
void					ft_ss(t_liste *pile_a, t_liste *pile_b, t_opt *state);

int						ft_pa(t_liste *pile_a, t_liste *pile_b, t_opt *state);
int						ft_pb(t_liste *pile_a, t_liste *pile_b, t_opt *state);

int						ft_rotate_a(t_liste *pile_a, t_opt *state);
int						ft_rotate_b(t_liste *pile_b, t_opt *state);
t_element				*ft_get_end_elem(t_liste *liste);
void					ft_rr(t_liste *pile_a, t_liste *pile_b, t_opt *state);

int						ft_reverse_rotate_a(t_liste *pile_a, t_opt *state);
int						ft_reverse_rotate_b(t_liste *pile_b, t_opt *state);
void					ft_rrr(t_liste *pile_a, t_liste *pile_b, t_opt *state);

int						little_element_pos(t_liste *liste);
int						s(int n, t_liste *pile_a, t_liste *pile_b, t_opt *sat);
int						end(int n, t_liste *pile_a, t_liste *pile_b, t_opt *s);
int						where(t_liste *pile_a, t_liste *pile_b, t_opt *s);
void					algo_1(t_liste *pile_a, t_liste *pile_b, t_opt *state);
void					algo_2(t_liste *pile_a, t_liste *pile_b, t_opt *state);
void					v_option(t_liste *pile_a, t_liste *pile_b);

int						ft_sort(t_liste *pile_a);
int						r_first(t_liste *pile_a);
int						ft_sort_inv(t_liste *pile_a);
int						ft_sort_before_end(t_element *courant);
int						ft_simple_one(t_liste *pile_a, t_opt *state);
int						ft_simple_two(t_liste *pile_a, t_opt *state);
int						ft_simple_three(t_liste *pa, t_opt *st, t_element *co);
int						ft_case(t_liste *pile_a, t_opt *state, t_element *co);

int						ft_nothing(t_opt *options, char **argv, int i, int j);
void					ft_what(t_liste *pa, t_liste *pb, t_opt *s, int nb);

void					option_d(void);
void					option_b(int nb);
void					option_l(t_liste *pile_a);
void					option_a(t_liste *pile_a);
void					ft_options(t_opt *state, t_liste *pile_a, int nb);

#endif
