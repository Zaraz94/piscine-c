/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 14:42:08 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/03 20:39:13 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char dest[] = "sarfer";
	char src[] = "59956";
	unsigned int n = 10;
	printf("My   : %s\n", ft_strncpy(dest, src, n));
	printf("Vrai : %s\n\n", strncpy(dest, src, n));
	return (0);
}
