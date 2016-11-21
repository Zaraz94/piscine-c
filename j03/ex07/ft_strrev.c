/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 23:30:37 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/02 23:30:39 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char	*ft_strrev(char *str)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		ft_swap(&str[i], &str[j]);
		i++;
		j--;
	}
	return (str);
}
