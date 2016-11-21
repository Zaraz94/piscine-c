/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.sudoku.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 20:17:14 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/10 23:04:11 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "resolve_sudoku.h"

int			test_value(int sudoku[9][9], int raw, int column)
{
	int		test_val;

	test_val = 1;
	while (test_val <= 9)
	{
		sudoku[raw][column] = test_val;
		if (check_value(sudoku, raw, column, test_val))
		{
			if (resolve_sudoku(sudoku))
				return (SUCESS);
		}
		sudoku[raw][column] = 0;
		test_val++;
	}
	return (EPIC_FAIL);
}

int			resolve_sudoku(int sudoku[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (sudoku[i][j] == 0)
			{
				if (test_value(sudoku, i, j))
					return (SUCESS);
				else
					return (EPIC_FAIL);
			}
			j++;
		}
		i++;
	}
	return (SUCESS);
}
