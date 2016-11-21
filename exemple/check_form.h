/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_form.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 10:25:24 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/18 00:21:18 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_FORM_H
# define CHECK_FORM_H

# include "constant.h"
# include "check_form_colle.h"
# include "struct_var.h"

int		check_form(char **tab, t_var *var);

int		check_form_two_to_four(char **tab, t_var *var);

int		check_form_two_to_four_column(char **tab, t_var *var);

int		check_form_two_to_four_ligne(char **tab, t_var *var);

#endif
