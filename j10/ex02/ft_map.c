/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:05:26 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/13 15:05:27 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *tab1;

	i = 0;
	tab1 = (int*)malloc(sizeof(*tab) * lenght);
	while (i < length)
	{
		tab1[i] = f(tab[i]);
		i++;
	}
	return (tab1);
}
