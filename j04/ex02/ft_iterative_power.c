/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 21:26:04 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/03 21:26:06 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int r;

	i = 0;
	r = 1;
	if (power == 0)
		return (1);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (i != power)
		{
			r *= nb;
			i++;
		}
	}
	return (r);
}
