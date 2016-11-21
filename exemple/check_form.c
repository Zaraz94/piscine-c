/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_form.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 10:26:01 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/18 01:41:27 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_form.h"

int		check_form(char **tab, t_var *var)
{
	int		x;
	int		y;

	x = var->nb_line;
	y = var->nb_column;
	if (tab[0][0] == 'o')
		return (check_form_zero(tab, var, 0));
	if (tab[0][0] == '/')
		return (check_form_one(tab, var, 0));
	if (tab[0][0] == 'A')
	{
		if (x == 1 && y == 1)
			return (COLLE_234);
		else if (x == 1 && y >= 2)
			return (check_form_two_to_four_ligne(tab, var));
		else if (x >= 2 && y == 1)
			return (check_form_two_to_four_column(tab, var));
		else
			return (check_form_two_to_four(tab, var));
	}
	else
		return (FAIL);
}

int		check_form_two_to_four_column(char **tab, t_var *var)
{
	int		x;
	int		i;

	x = var->nb_line - 1;
	i = 1;
	while (i < x)
	{
		if (tab[i][0] != 'B')
			return (FAIL);
		i++;
	}
	if (tab[x][0] == 'A')
		return (COLLE_03);
	if (tab[x][0] == 'C')
		return (COLLE_24);
	else
		return (FAIL);
}

int		check_form_two_to_four_ligne(char **tab, t_var *var)
{
	int		y;
	int		i;

	y = var->nb_column - 1;
	i = 1;
	while (i < y)
	{
		if (tab[0][i] != 'B')
			return (FAIL);
		i++;
	}
	if (tab[0][y] == 'A')
		return (COLLE_02);
	else if (tab[0][y] == 'C')
		return (COLLE_34);
	else
		return (FAIL);
}

int		check_form_two_to_four(char **tab, t_var *var)
{
	int		x;
	int		y;

	x = var->nb_line - 1;
	y = var->nb_column - 1;
	if (tab[0][y] == 'A')
		return (check_form_two(tab, var, 0));
	else if (tab[0][y] == 'C' && tab[x][0] == 'C')
		return (check_form_four(tab, var, 0));
	else if (tab[0][y] == 'C' && tab[x][y] == 'C')
		return (check_form_three(tab, var, 0));
	else
		return (FAIL);
}
