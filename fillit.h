
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:13:00 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/26 16:13:00 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef         struct 
{
	char		*str;
	int         h;
	int         w;
}               tetr_mask;

typedef         struct
{
	int        x;
	int        y;
}              location_mark;

typedef         struct 
{
	char		*str;
	int         h;
	int         w;
}               board;

typedef         struct 
{
	char		str[21];
	int         num;
}               block;
extern		tet_maks[19];
# define	MAX_BLOCK 26
# define	DOT(board, x, y) (board)->str[(y) * ((board)->w) + (x)];
 
board		ft_create_board(int	value);
int			ft_set_block(board *new, tetr_mask *mask, location point, char c)
int			ft_read_file(const int fd, tetr_mask **new_tetr);
int			ft_verify_block(block *new, char *str);


#endif
