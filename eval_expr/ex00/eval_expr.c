/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 13:24:40 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/17 13:24:41 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	eval_expr(char *str)
{
	int i;
	i = 0;


}
int main(int ac, char **av) 
{
	if (ac > 1)
	{
	    ft_putnbr(eval_expr(av[1]));
	    ft_putchar('\n');
	}
	return (0); 
}