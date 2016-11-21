/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_ligne_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 13:00:33 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/17 15:08:05 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count_ligne_char.h"

void	count_ligne_char(char *str,
						int *nb_ligne,
						int *nb_char_in_ligne)
{
	int		i;

	i = 0;
	*nb_ligne = 0;
	*nb_char_in_ligne = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			(*nb_ligne)++;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			(*nb_char_in_ligne) = i;
			break ;
		}
		i++;
	}
}
