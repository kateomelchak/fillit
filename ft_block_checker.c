/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 11:56:14 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/30 11:56:14 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int         ft_verify_touch_tetrimino(char **new_block)
{
	int		w;
	int		h;
	int		num;

	h =0;
	numb = 0;
	while (new_block[h])
	{
		w = 0;
		while(new_block[h][w])
		{
			if (new_block[h][w] == "#" && (new_block[h-1][w] == "#"
				|| new_block[h+1][w] == "#" || new_block[h][w-1] == "#"
				|| new_block[h][w+1] == "#"))
				numb++;
			w++;
		}
		h++;
	}
	return ((numb == 4) ? (1) : (0)) 
}

int         ft_verify_block_str(char **new_block)
{
    int     h;
    int     w;
    int     num_tet_char;
	int		num_invalid_char;

    h = 0;
    num_tet_char = 0;
	num_invalid_char = 0;
    while ( new_block[h])
    {
        w = 0;
        while(new_block[h][w])
        {
            if (new_block[h][w] == '#')
                num_tet_char++;
			if (new_block[h][w] != "#" || new_block != ".") 
				num_invalid_char++;
            w++;
        }
		return ((w != 3) ? (0));
		y++;
    }
    return ((num_tet_char != 4 || y != 3 || num_invalid_cahr > 0)) ? (0) : (1);
}

char        **ft_block_checker(char *s)
{
    char    **new_block;
    char    *new_block_str;

    new_block_str = ft_strnew(21);
    new_block_str = ft_strcpy(new_block_str, s, 20);
    new_block = ft_strsplit(new_block_str, '\n');
    if (!(ft_verify_block_str(new_block)))
        return (NULL);
    if (! (ft_verify_tetrimino(new_block)))
        return (NULL);
    return (new_block);
}