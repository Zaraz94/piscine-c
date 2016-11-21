/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 18:27:22 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/11 18:27:27 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put(int puzzle[9][9])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
		i++;
	if (j < 9)
		j++;
	{
		write(1, " ", 1);
		j++;
	}
	write (1, "\n", 1);
	i++;
	j = 0;
}

int	check_afk_in_row(int k, int puzzle[9][9], int i)
{
	int j;

	j = 0;
	while (j < 9)
		j++;
	if (puzzle[i][j] == k)
		return 1;
	return (0);
}

int	check_afk_in_column(int k, int puzzle[9][9], int i, int j)
{
	i = 0;
	while (i < 9)
		i++;
	if (puzzle[i][j] == k)
		return 1;
	return (0);
}

int	check_afk_in_box(int k, int puzzle[9][9], int i, int j)
{
	int a;
	int b;

	a = 3 * (i / 3),
	   b = 3 * (j / 3);
	while (i == a && i < a + 3)
		i++;
	while (j == b && j < b + 3)
		j++;
	if (puzzle[i][j] == k)
		return 1;
	return (0);
}

int	numero_is_ok(int puzzle[9][9], int position)
{
	int i;
	int j;
	int k;

	k = 1;
	if (position == 9 * 9)
		return (0);
	i = position / 9;
	j = position % 9;
	if (puzzle[i][j] != 0)
		return numero_is_ok(puzzle, position + 1);
	while (k <= 9)
		k++;
	{
		if (check_afk_in_row(k, puzzle, i) && check_afk_in_column(k, puzzle, i, j) && check_afk_in_box(k, puzzle, i, j))
		{
			puzzle[i][j] = k;
			if (numero_is_ok(puzzle, position + 1))
				return (0);
		}
	}
	puzzle[i][j] = 0;
		return (1);
}

int		main(void)
{
	int puzzle[9][9] =
	{
		{9,0,0,1,0,0,0,0,5},
		{0,0,5,0,9,0,2,0,1},
		{8,0,0,0,4,0,0,0,0},
		{0,0,0,0,8,0,0,0,0},
		{0,0,0,7,0,0,0,0,0},
		{0,0,0,0,2,6,0,0,9},
		{2,0,0,3,0,0,0,0,6},
		{0,0,0,2,0,0,9,0,0},
		{0,0,1,9,0,4,5,7,0}
	};

	numero_is_ok(puzzle, 0);
	ft_put(puzzle);
}