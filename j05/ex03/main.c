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

char	*ft_strcpy(char *dest, char *src);

int main()
{
	char dest[] = "salut";
	char src[] = "599525";
	printf("My   : %s\n", ft_strcpy(dest, src));
	printf("Vrai : %s\n\n", strcpy(dest, src));
	return (0);
}
