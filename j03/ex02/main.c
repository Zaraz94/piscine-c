/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 14:42:08 by kitrosse          #+#    #+#             */
/*   Updated: 2016/08/31 14:42:11 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_putchar(char c);

void	ft_swap(int *a,int *b);

int		main()
{
	int *a;
	int *b;
	int c;
	int d;
	c = 97;
	d = 122;
	a = &c;
	b = &d;
	


	ft_swap(a, b);
	ft_putchar(c);
	ft_putchar(d);
	return (0);
}