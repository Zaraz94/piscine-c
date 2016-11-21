/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 20:08:11 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/01 20:08:13 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int a;
	int b;
	a = 0;
	while (a <= 98)
	{	
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar('0' + a / 10);
			ft_putchar('0' + a % 10);
			ft_putchar(' ');
			ft_putchar('0' + b / 10);
			ft_putchar('0' + b % 10);
			if (a < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		b++;
		}
	a++;
	}
}