/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 23:07:57 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/17 23:54:53 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include <unistd.h>
# include "ft_strlen.h"
# include "constant.h"
# include "struct_var.h"
# include "ft_putnbr.h"

void	ft_putstr(char *str);

void	print_single_colle(t_var *var, int val);

void	print_colle_two_four(t_var *var);

void	print_colle_two_three_four(t_var *var);

void	print(t_var *var, int val);

#endif
