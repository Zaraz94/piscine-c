/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 23:19:59 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/07 23:38:23 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_param(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(char **list, int size)
{
	int		s;
	int		i;
	char	*tmp;

	i = 0;
	s = 0;
	while (!s)
	{
		i = 0;
		s = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(list[i], list[i + 1]) > 0)
			{
				s = 0;
				tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argv + 1, argc - 1);
	while (i < argc)
	{
		ft_print_param(argv[i]);
		i++;
	}
	return (0);
}
