/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetr_mask.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 19:44:31 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/28 19:44:31 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

tetr_mask	tet_mask[19] = 
{
    {
        "####",
        1,
        4,
    },
    {
        "#"
        "#"
        "#"
        "#",
        4,
        1,
    },
    {
        "##"
        "##",
        2,
        2,
    },
    {
        "###"
        ".#.",
        2,
        3,
    },
    {
        ".#."
        "###",
        2,
        3,
    },
    {
        "#."
        "##"
        "#.",
        3,
        2,
    },
    {
        ".#"
        "##"
        ".#",
        3,
        2,
    },
    {
        "#."
        "##"
        ".#",
        3,
        2,
    },
    {
        ".#"
        "##"
        "#.",
        3,
        2,
    },
    {
        "##."
        ".##",
        2,
        3,
    },
    {
        ".##"
        "##.",
        2,
        3,
    },
    {
        "###"
        "#..",
        2,
        3,
    },
    {
        "###"
        "..#",
        2,
        3,
    },
    {
        "##"
        "#."
        "#.",
        3,
        2,
    },
    {
        "#."
        "#."
        "##",
        3,
        2,
    },
    {
        "##"
        ".#"
        ".#",
        3,
        2,
    },
    {
        ".#"
        ".#"
        "##",
        3,
        2,
    },
    {
        "..#"
        "###",
        2,
        3,
    }
    {
        "#.."
        "###",
        2,
        3,
    },

};