/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 23:13:38 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/06 23:26:35 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_alphanumeric(str[i - 1]) == 0 &&
			str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (ft_is_alphanumeric(str[i - 1]) == 1 &&
			str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
