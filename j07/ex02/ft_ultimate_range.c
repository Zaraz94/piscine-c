/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 21:55:38 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/08 21:55:40 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);
{
	int *tab;
	int i;
	int diff;

	tab = 0;
	i = 0;
	if (min >= max)
		*range = NULL;
	diff = max - min;
	tab = (int*)malloc(sizeof(int) * diff + 1);
	while (i != diff)
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = NULL;
	*range = tab;
	return (i);
}
