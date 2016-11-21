/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 21:13:28 by kitrosse          #+#    #+#             */
/*   Updated: 2016/08/31 21:13:31 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putchar3(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = '0';
	y = '1';
	z = '2';
	while (x < '9')
	{
		while (y <= '9')
		{
			while (z <= '9')
			{
				if (x < y && y < z)
					ft_putchar3(x, y, z);
				z++;
			}
			y++;
			z = '0';
		}
		x++;
		y = '0';
	}
}
