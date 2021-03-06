/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 14:57:39 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/03 18:53:43 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int b;

	b = nb;
	if (b == 0)
		return (1);
	else if (b > 0 && b < 13)
	{
		while (b != 1)
		{
			nb *= b - 1;
			b--;
		}
	}
	else
	{
		return (0);
	}
	return (nb);
}
