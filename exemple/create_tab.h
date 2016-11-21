/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 11:24:06 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/18 13:46:36 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATE_TAB_H
# define CREATE_TAB_H
# define BUFF_SIZE 50

# include <stdlib.h>
# include <unistd.h>
# include "constant.h"
# include "ft_strdup.h"
# include "count_ligne_char.h"
# include "ft_strlen.h"
# include "struct_var.h"

char	*ft_realloc(char *str, char *tmp, int n);

char	*read_input(void);

char	**create_tab(t_var *p);

void	init_buffer(char *str);

#endif
