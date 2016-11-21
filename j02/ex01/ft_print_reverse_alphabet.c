/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 16:00:34 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/01 13:36:19 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char a;
	char z;

	a = 'a';
	z = 'z';
	while (z >= a)
	{
		ft_putchar(z);
		z--;
	}
}
