/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 14:34:25 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/18 14:19:05 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "create_tab.h"
#include <stdio.h>
void	init_buffer(char *str)
{
	int		i;

	i = 0;
	while (i < BUFF_SIZE + 1)
	{
		str[i] = 0;
		i++;
	}
}

char	*ft_realloc(char *str, char *tmp, int n)
{
	int		i;
	int		lenght;
	char	*new;
	
	lenght = ft_strlen(str);
	new = malloc(sizeof(char) * (lenght + n + 1));
	i = 0;
	while (i < lenght)
	{
		new[i] = str[i];
		i++;
	}
	free(str);
	i = 0;
	while (i < n)
	{
		new[i + lenght] = tmp[i];
		i++;
	}
	new[lenght + n] = '\0';
	return (new);
}

char	*read_input(void)
{
	char	*tmp;
	char	*str;
	int		octet_read;
	int		lenght;

	tmp = malloc(sizeof(char) * (BUFF_SIZE + 1));
	str = malloc(0);
	octet_read = BUFF_SIZE;
	lenght = 0;
	while (octet_read == BUFF_SIZE)
	{
		init_buffer(tmp);
		octet_read = read(0, tmp, BUFF_SIZE);
		if (octet_read == 0 || octet_read == -1)
			return (NULL);
		lenght = ft_strlen(tmp);
		printf(" octet_read = %d lenght = %d\n", octet_read, lenght);
		if (octet_read)
			str = ft_realloc(str, tmp, lenght + 1);
	}
	free(tmp);
	return (str);
}

char	**create_tab(t_var *p)
{
	char	*str;
	char	**tab;
	int		nb_line;
	int		nb_char_in_line;
	int		i;

	i = 0;
	str = read_input();
	if (str == NULL)
		return (NULL);
	count_ligne_char(str, &nb_line, &nb_char_in_line);
	p->nb_line = nb_line;
	p->nb_column = nb_char_in_line;
	tab = malloc(sizeof(*tab) * (nb_line + 1));
	while (i < nb_line)
	{
		tab[i] = ft_strdup(str, i * (nb_char_in_line + 1));
		i++;
	}
	free(str);
	tab[i] = 0;
	return (tab);
}
