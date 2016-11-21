/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 03:56:36 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/17 13:22:22 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strdup.h"

char		*ft_strdup(char *src, int start)
{
	int		i;
	int		len_src;
	char	*dest_cpy;

	i = start;
	len_src = 0;
	while (src[i] != '\n')
	{
		i++;
		len_src++;
	}
	i = start;
	dest_cpy = malloc(sizeof(char) * (len_src + 1));
	if (dest_cpy == NULL)
		return (NULL);
	while (src[i] != '\n')
	{
		dest_cpy[i - start] = src[i];
		i++;
	}
	dest_cpy[i] = '\0';
	return (dest_cpy);
}
