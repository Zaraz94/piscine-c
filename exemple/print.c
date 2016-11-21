/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 23:08:59 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/18 01:48:45 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	print_single_colle(t_var *var, int val)
{
	ft_putstr("[colle-");
	if (val == COLLE_00)
		ft_putstr("00] [");
	if (val == COLLE_01)
		ft_putstr("01] [");
	if (val == COLLE_02)
		ft_putstr("02] [");
	if (val == COLLE_03)
		ft_putstr("03] [");
	if (val == COLLE_04)
		ft_putstr("04] [");
	ft_putnbr(var->nb_column);
	ft_putstr("] [");
	ft_putnbr(var->nb_line);
	ft_putstr("]\n");
}

void	print_colle_two_four(t_var *var)
{
	ft_putstr("[colle-02] [");
	ft_putnbr(var->nb_column);
	ft_putstr("] [");
	ft_putnbr(var->nb_line);
	ft_putstr("] || [colle-04] [");
	ft_putnbr(var->nb_column);
	ft_putstr("] [");
	ft_putnbr(var->nb_line);
	ft_putstr("]\n");
}

void	print_colle_two_three_four(t_var *var)
{
	ft_putstr("[colle-02] [");
	ft_putnbr(var->nb_column);
	ft_putstr("] [");
	ft_putnbr(var->nb_line);
	ft_putstr("] || [colle-03] [");
	ft_putnbr(var->nb_column);
	ft_putstr("] [");
	ft_putnbr(var->nb_line);
	ft_putstr("] || [colle-04] [");
	ft_putnbr(var->nb_column);
	ft_putstr("] [");
	ft_putnbr(var->nb_line);
	ft_putstr("]\n");
}

void	print(t_var *var, int val)
{
	if (val == FAIL)
		ft_putstr("aucune\n");
	if (val == COLLE_00 || val == COLLE_01
		|| val == COLLE_02 || val == COLLE_04)
		print_single_colle(var, val);
	if (val == COLLE_24)
		print_colle_two_four(var);
	if (val == COLLE_234)
		print_colle_two_three_four(var);
}
