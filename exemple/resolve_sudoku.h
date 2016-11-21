/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_sudoku.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 20:17:52 by jberthie          #+#    #+#             */
/*   Updated: 2016/09/10 23:04:42 by jberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESOLVE_SUDOKU_H
# define RESOLVE_SUDOKU_H
# define SUCESS 1
# define EPIC_FAIL 0

# include "check_value.h"

int		test_value(int sudoku[9][9], int raw, int column);

int		resolve_sudoku(int sudoku[9][9]);

#endif
