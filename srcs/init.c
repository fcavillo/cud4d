/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 09:48:17 by fcavillo          #+#    #+#             */
/*   Updated: 2021/03/04 10:31:47 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

void    ft_init_2(t_all *all)
{
    all->map.spawn_orientation = 'A';
    all->map.spawn_x = -1;
    all->map.spawn_y = -1;
    all->map.spawn_nb = 0;
    all->map.spr_nb = 0;
    all->win.x = 0;
    all->win.y = 0;
    all->map.charmap = 0;
    all->map.inmap = 0;
    all->map.count = 0;
    all->map.emptyline = 0;
    all->err = 0;
    all->err2 = 0;
}

void    ft_init(t_all *all)
{
    all->tex.n = NULL;
    all->tex.s = NULL;
    all->tex.w = NULL;
    all->tex.e = NULL;
    all->tex.spr = NULL;
    all->tex.c = -1;
    all->tex.f = -1;
    all->map.x = 0;
    all->map.y = 0;
    all->map.cub = NULL;
    ft_init_2(all);
}