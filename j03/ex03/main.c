/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 14:42:08 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/02 16:21:49 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_putchar(char c);

void	ft_ultimate_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int div;
	int mod;
	ft_ultimate_div_mod(5, 0, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
}
