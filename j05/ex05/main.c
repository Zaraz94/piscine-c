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

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char to_find[] = "23";
	char src[] = "123456";
	unsigned int n = 10;
	printf("My   : %s\n", ft_strstr(str, to_find));
	printf("Vrai : %s\n\n", strstr(str, to_find));
	return (0);
}
