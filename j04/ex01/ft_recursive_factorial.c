/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 17:59:57 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/03 17:59:59 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb > 0 && nb < 13)
	{
		if (nb != 1)
		{
			nb *= ft_recursive_factorial(nb - 1);
		}
	}
	else
	{
		return (0);
	}
	return (nb);
}
