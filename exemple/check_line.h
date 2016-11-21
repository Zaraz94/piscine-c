/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 20:11:05 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/17 22:01:03 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_LINE_H
# define CHECK_LINE_H

# include "constant.h"
# include "struct_var.h"
# include <stdlib.h>

int		check_first_line(char **tab, t_var *var,
						char *symb);

int		check_line_middle(char **tab, t_var *var,
							char *symb, int line);

int		check_last_line(char **tab, t_var *var,
						char *symb);

char	*init_tab(char start, char middle, char end);

#endif
