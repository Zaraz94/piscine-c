/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 14:15:39 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/16 14:15:40 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int		result[8];
	int		i;
	int		swap;

	swap = octet;
	i = 7;

	while (i >= 0)
	{
		result[i] = swap % 2 + '0';
		swap = swap / 2;
		i--;
	}
	i = 0;
	while (i < 8)
	{
		write(1, &result[i], 1);
		i++;
	}
}

int	main()
{
	unsigned char a = 'a';
	unsigned char b = 'b';
	unsigned char c = 'c';
	unsigned char d = 'd';
	unsigned char e = '1';
	unsigned char f = '2';
	unsigned char g = 'g';
	unsigned char h = 'h';
	print_bits(a);
	printf("%c\n", '\n');
	print_bits(b);
	printf("%c\n", '\n');
	print_bits(c);
	printf("%c\n", '\n');
	print_bits(d);
	printf("%c\n", '\n');
	print_bits(a);
	printf("%c\n", '\n');
	print_bits(f);
	printf("%c\n", '\n');
	print_bits(g);
	printf("%c\n", '\n');
	print_bits(h);
	printf("%c\n", '\n');
	return (0);
}