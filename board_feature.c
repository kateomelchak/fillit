/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_feature.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 05:51:34 by eomelcha          #+#    #+#             */
/*   Updated: 2019/07/01 05:51:34 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

board			    ft_create_board(int	side)
{
    board       *new;

    new = (board *)malloc(sizeof(board));
    new->str = (char *)malloc(side * side);
    ft_memset(new->str, '.', side * side);
    new->h = side;
    new->w = side;
    return (board);
}