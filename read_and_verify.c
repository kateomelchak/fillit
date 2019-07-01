/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_verify.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 05:37:27 by eomelcha          #+#    #+#             */
/*   Updated: 2019/07/01 05:37:27 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdlib.h>
#include    "fillit.h"

int         ft_block_content(block *new, board *block_board, int mask, int num)
{
    location_mark       point;
    int                 i;

    i = num;
    point.x = 0;
    while ((point.x + ) + tet_mask[mask].w < 5)
    {
        point.y = 0;
        while (point.y + tet_mask[mask].h < 5)
        {
            ft_set_block(new, tet_maks + mask, point, '#');
        }
    }
}

int         ft_create_block(block *new)
{
    board   *block_board;
    int     mask;
    int     num;

    mask = 0;
    num = 0;
    block_board = ft_create_board(4);
    while (mask < 19)
    {
        num = ft_block_content(new, block_board, mask, num);
        type++;
    }
    ft_free_board(block_board)
    return (1);
}

int         ft_verify_block(block *new, char *str)
{
    int     i;

    i = 0;
    while(new.i.s[0])
    {
        if (ft_strcmp(p[i].s, str, 20) == 0)
            return (p[i].num);
        i++;
    }
    return (-1);
}

int         ft_read_file(const int fd, tetr_mask **new_tetr)
{
    block   new[19 * 16];
    char    buff[22];
    int     i;
    int     num;

    ft_create_block(new);
    i = 0;
    while (i < MAX_BLOCK)
    {
        num = read(fd, buff, 21);
        buff[21] = '\0';
        if (ft_verify_block(new, buff == -1))
            return (0);
        else
            new_tetr[i] = tet_mask + ft_verify_block(new, buff);
        if (num == 20)
            return (1);
        i++;
    }
    if (i >= MAX_BLOCK)
        return (0);
    return (1);
    }
}
