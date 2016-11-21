/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 11:12:00 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/10 23:09:05 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_value.h"

int			check_value(int sudoku[9][9], int raw, int column, int value)
{
	int		i;
	int		j;
	int		start_raw_square;
	int		start_column_square;

	i = 0;
	start_raw_square = (raw / 3) * 3;
	start_column_square = (column / 3) * 3;
	while (i++ < 9)
	{
		j = 0;
		if (sudoku[raw][i] == value && i != column)
			return (0);
		if (sudoku[i][column] == value && i != raw)
			return (0);
		while (i < 3 && j < 3)
		{
			if (sudoku[i + start_raw_square][j + start_column_square] == value
			&& i + start_column_square != raw
			&& j + start_column_square != column)
				return (0);
			j++;
		}
	}
	return (1);
}
