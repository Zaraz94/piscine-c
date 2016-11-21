/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 16:05:53 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/11 16:35:49 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	lg;

	lg = 0;
	while (*str != '\0')
	{
		lg++;
		str++;
	}
	return (lg);
}

void	ft_w_grille(int **grille)
{
	int		i;
	int		j;
	char	k;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (j != 0)
				write(1, " ", 1);
			k = grille[i][j] + '0';
			write(1, &k, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		ft_abs_lig(int val, int **grille, int n_l)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (grille[n_l][i] == val)
			return (0);
		i++;
	}
	return (1);
}

int		ft_abs_col(int val, int **grille, int n_c)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (grille[i][n_c] == val)
			return (0);
		i++;
	}
	return (1);
}

int		ft_abs_bloc(int val, int **grille, int n_l, int n_c)
{
	int	i;
	int	j;
	int	i_min;
	int	j_min;

	i_min = n_l - (n_l % 3);
	j_min = n_c - (n_c % 3);
	i = i_min;
	while (i < i_min + 3)
	{
		j = j_min;
		while (j < j_min + 3)
		{
			if (grille[i][j] == val)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		**ft_decompose(char **argv)
{
	int		i;
	int		**grille;
	int		j;
	char	*str;

	i = 0;
	grille = malloc(9 * sizeof(int *));
	while (i < 9)
	{
		str = argv[i + 1];
		if (ft_strlen(str) != 9)
		{
			return (NULL);
		}
		grille[i] = malloc(9 * sizeof(int));
		j = 0;
		while (j < 9)
		{
			grille[i][j] = (*str == '.') ? 0 : *str - '0';
			j++;
			str++;
		}
		i++;
	}
	return (grille);
}

int		ft_est_resolu(int **grille, int position)
{
	int i;
	int j;
	int k;

	if (position == 9 * 9)
		return (1);
	i = position / 9;
	j = position % 9;
	if (grille[i][j] != 0)
		return (ft_est_resolu(grille, position + 1));
	k = 1;
	while (k <= 9)
	{
		if (ft_abs_lig(k, grille, i) && ft_abs_col(k, grille, j) &&
				ft_abs_bloc(k, grille, i, j))
		{
			grille[i][j] = k;
			if (ft_est_resolu(grille, position + 1))
				return (1);
		}
		k++;
	}
	grille[i][j] = 0;
	return (0);
}

int		main(int argc, char **argv)
{
	int	**grille;

	if (argc == 10)
	{
		grille = ft_decompose(argv);
		if (grille != NULL)
			ft_w_grille(grille);
		if ((grille != NULL) && (ft_est_resolu(grille, 0) != 0))
		{
			write(1, "\n", 1);
			ft_w_grille(grille);
			return (0);
		}
	}
	write(1, "ERREUR\n", 7);
	return (0);
}
