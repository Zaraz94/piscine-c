/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_sudoku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 22:05:37 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/10 23:03:14 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_sudoku.h"

int				fill_sudoku(int sudoku[9][9], char **av)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if ((av[i + 1][j] >= '1') && (av[i + 1][j] <= '9'))
				sudoku[i][j] = av[i + 1][j] - '0';
			else if (av[i + 1][j] == '.')
				sudoku[i][j] = 0;
			else
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
