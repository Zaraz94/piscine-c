/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_form_colle.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 10:57:21 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/18 00:20:44 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_FORM_COLLE_H
# define CHECK_FORM_COLLE_H

# include "constant.h"
# include "struct_var.h"
# include "check_line.h"

int		check_form_zero(char **tab, t_var *var, int i);

int		check_form_one(char **tab, t_var *var, int i);

int		check_form_two(char **tab, t_var *var, int i);

int		check_form_three(char **tab, t_var *var, int i);

int		check_form_four(char **tab, t_var *var, int i);

#endif
