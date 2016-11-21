/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 10:59:29 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/10 21:43:09 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_sudoku.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		print_sudoku(int sudoku[9][9])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(sudoku[i][j] + '0');
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
