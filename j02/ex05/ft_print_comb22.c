/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 12:01:54 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/01 19:52:42 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_putchar(char c);

void	ft_put(char a, char b, char c, char d)
{
	if (d > b && c >= a )
	{
		ft_putchar(a);
		ft_putchar(b);
		//ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		ft_putchar(' ');
		ft_putchar(',');
	}
}
void	ft_incre(char a, char b, char c, char d)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			ft_put(a, b, c, d);
			d++;
		}
		d = '0';
		c++;

	}
}
void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		while (b <= '9')
		{
			ft_incre(a, b, c, d);
		}
		c = '0';
		b++;
	}
	b = '0';
	a++;
}

