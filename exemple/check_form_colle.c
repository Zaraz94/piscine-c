/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_form_colle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 11:00:55 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/18 01:43:49 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_form_colle.h"

int		check_form_zero(char **tab, t_var *var, int i)
{
	char	*symb;

	symb = init_tab('o', '-', 'o');
	if (check_first_line(tab, var, symb) == FAIL)
		return (FAIL);
	if (var->nb_line >= 3)
	{
		while (++i < var->nb_line - 1)
		{
			symb = init_tab('|', ' ', '|');
			if (check_line_middle(tab, var, symb, i) == FAIL)
			{
				return (FAIL);
			}
		}
	}
	if (var->nb_line >= 2)
	{
		symb = init_tab('o', '-', 'o');
		if (check_last_line(tab, var, symb) == FAIL)
			return (FAIL);
	}
	return (COLLE_00);
}

int		check_form_one(char **tab, t_var *var, int i)
{
	char	*symb;

	symb = init_tab('/', '*', '\\');
	if (check_first_line(tab, var, symb) == FAIL)
		return (FAIL);
	if (var->nb_line >= 3)
	{
		while (++i < var->nb_line - 1)
		{
			symb = init_tab('*', ' ', '*');
			if (check_line_middle(tab, var, symb, i) == FAIL)
				return (FAIL);
		}
	}
	if (var->nb_line >= 2)
	{
		symb = init_tab('\\', '*', '/');
		if (check_last_line(tab, var, symb) == FAIL)
			return (FAIL);
	}
	return (COLLE_01);
}

int		check_form_two(char **tab, t_var *var, int i)
{
	char	*symb;

	symb = init_tab('A', 'B', 'A');
	if (check_first_line(tab, var, symb) == FAIL)
		return (FAIL);
	if (var->nb_line >= 3)
	{
		while (++i < var->nb_line - 1)
		{
			symb = init_tab('B', ' ', 'B');
			if (check_line_middle(tab, var, symb, i) == FAIL)
				return (FAIL);
		}
	}
	if (var->nb_line >= 2)
	{
		symb = init_tab('C', 'B', 'C');
		if (check_last_line(tab, var, symb) == FAIL)
			return (FAIL);
	}
	return (COLLE_02);
}

int		check_form_three(char **tab, t_var *var, int i)
{
	char	*symb;

	symb = init_tab('A', 'B', 'C');
	if (check_first_line(tab, var, symb) == FAIL)
		return (FAIL);
	if (var->nb_line >= 3)
	{
		while (++i < var->nb_line - 1)
		{
			symb = init_tab('B', ' ', 'B');
			if (check_line_middle(tab, var, symb, i) == FAIL)
				return (FAIL);
		}
	}
	if (var->nb_line >= 2)
	{
		symb = init_tab('A', 'B', 'C');
		if (check_last_line(tab, var, symb) == FAIL)
			return (FAIL);
	}
	return (COLLE_03);
}

int		check_form_four(char **tab, t_var *var, int i)
{
	char	*symb;

	symb = init_tab('A', 'B', 'C');
	if (check_first_line(tab, var, symb) == FAIL)
		return (FAIL);
	if (var->nb_line >= 3)
	{
		while (++i < var->nb_line - 1)
		{
			symb = init_tab('B', ' ', 'B');
			if (check_line_middle(tab, var, symb, i) == FAIL)
				return (FAIL);
		}
	}
	if (var->nb_line >= 2)
	{
		symb = init_tab('C', 'B', 'A');
		if (check_last_line(tab, var, symb) == FAIL)
			return (FAIL);
	}
	return (COLLE_04);
}
