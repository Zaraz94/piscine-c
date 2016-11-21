/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:20:31 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/09 15:20:32 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

	int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	while (i > 0)
	{
		if (argv[i] == president || argv[i] == attack || argv[i] == powers)
		{	
			ft_putstr(Alert!!!);
			ft_putchar('\n');
			i--;
		}
	return (0);
}
