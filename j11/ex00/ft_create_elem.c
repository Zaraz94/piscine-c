/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 12:12:53 by kitrosse          #+#    #+#             */
/*   Updated: 2016/09/14 12:12:55 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	new = malloc(sizeof(t_list));
	if new == NULL
		return NULL
	new->data = data;
	new->next = NULL;
	return (new);

}

#include <string.h>
#include <stdio.h>
#include "ft_list.h"

int		main(void)
{
	t_list	*elem;
	char	*hey;

	hey = strdup("Hello amigo!");
	elem = ft_create_elem(hey);
	printf("%s\n", elem->data);
}
