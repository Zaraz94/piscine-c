/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 18:44:56 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/17 18:44:57 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			ft_is_spaces(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int			ft_count_word(char *str)
{
	int		i;
	int		total_words;

	i = 0;
	total_words = 0;
	while (str[i])
	{
		while (ft_is_spaces(str[i]))
			i++;
		if (str[i] == '\0')
			return (total_words);
		while (!ft_is_spaces(str[i]) && str[i])
			i++;
		total_words++;
	}
	return (total_words);
}

char		*ft_cpy_str(char *dest, char *src, int start, int lenght_w)
{
	int		i;
	int		j;

	i = 0;
	j = start;
	dest = malloc(sizeof(char) * (lenght_w + 1));
	if (dest == NULL)
		return (NULL);
	while (i < lenght_w)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void		ft_split(char **tab_word, char *str)
{
	int			i;
	int			lenght_word;

	i = 0;
	lenght_word = 0;
	while (str[i])
	{
		while (ft_is_spaces(str[i]))
			i++;
		if (str[i] == '\0')
			break ;
		lenght_word = 0;
		while (!ft_is_spaces(str[i]) && str[i])
		{
			i++;
			lenght_word++;
		}
		*tab_word = ft_cpy_str(*tab_word, str, i - lenght_word, lenght_word);
		tab_word++;
	}
	*tab_word = NULL;
}

char		**ft_split_whitespaces(char *str)
{
	char	**tab_word;
	int		nb_word;

	nb_word = ft_count_word(str);
	tab_word = malloc(sizeof(char *) * (nb_word + 1));
	if (tab_word == NULL)
		return (NULL);
	ft_split(tab_word, str);
	return (tab_word);
}

// int		main()
// {
// 	char	**p = ft_split_whitespaces("Salut les copains");
// 	while (*p)
// 	{
// 		printf("%s\n", *p);
// 		p++;
// 	}
// 	return (0);
// }