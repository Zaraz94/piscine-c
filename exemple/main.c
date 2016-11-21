/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 13:34:13 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/18 13:28:27 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "create_tab.h"
#include "struct_var.h"
#include "check_form.h"
#include "print.h"
#include <stdlib.h>

int		main(void)
{
	t_var	*var;
	char	**tab;
	char	**tmp;
	int		return_value;

	var = malloc(sizeof(t_var));
	tab = create_tab(var);
	if (tab == NULL)
	{
		write(1, "aucune\n", 1);
		return (0);
	}
	return_value = check_form(tab, var);
	print(var, return_value);
	free(var);
	tmp = tab;
	while (*tmp)
	{
		free(*tmp);
		tmp++;
	}
	free(tab);
	return (0);
}
