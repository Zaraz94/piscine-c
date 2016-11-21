/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 20:10:39 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/18 01:47:41 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_line.h"

int		check_first_line(char **tab, t_var *var,
						char *symb)
{
	int		i;
	int		y;

	i = 0;
	y = var->nb_column;
	while (i < y)
	{
		if ((i == 0 && tab[0][0] != symb[0]) ||
			(i == y - 1 && tab[0][i] != symb[2]))
		{
			free(symb);
			return (FAIL);
		}
		if (i != 0 && i != y - 1 && tab[0][i] != symb[1])
		{
			free(symb);
			return (FAIL);
		}
		i++;
	}
	free(symb);
	return (SUCCESS);
}

int		check_line_middle(char **tab, t_var *var,
							char *symb, int line)
{
	int		i;
	int		y;

	i = 0;
	y = var->nb_column;
	while (i < y)
	{
		if ((i == 0 && tab[line][0] != symb[0]) ||
			(i == y - 1 && tab[line][y - 1] != symb[2]))
		{
			free(symb);
			return (FAIL);
		}
		if (i != 0 && i != y - 1 && tab[line][i] != symb[1])
		{
			free(symb);
			return (FAIL);
		}
		i++;
	}
	free(symb);
	return (SUCCESS);
}

int		check_last_line(char **tab, t_var *var,
						char *symb)
{
	int		i;
	int		y;
	int		last_line;

	i = 0;
	y = var->nb_column;
	last_line = var->nb_line - 1;
	while (i < y)
	{
		if ((i == 0 && tab[last_line][0] != symb[0]) ||
			(i == y - 1 && tab[last_line][i] != symb[2]))
		{
			free(symb);
			return (FAIL);
		}
		if (i != 0 && i != y - 1 && tab[last_line][i] != symb[1])
		{
			free(symb);
			return (FAIL);
		}
		i++;
	}
	free(symb);
	return (SUCCESS);
}

char	*init_tab(char start, char middle, char end)
{
	char	*tab;

	tab = malloc(sizeof(char) * 3);
	tab[0] = start;
	tab[1] = middle;
	tab[2] = end;
	return (tab);
}
