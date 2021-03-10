/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:03:46 by fcavillo          #+#    #+#             */
/*   Updated: 2021/03/10 15:21:02 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"



void	ft_init_dir(t_all *all)
{
	if (all->map.spawn_orientation == 'N')
    {
		all->ray.dirx = -1;
    	all->ray.plany = 0.66;

    }
	if (all->map.spawn_orientation == 'S')
    {
		all->ray.dirx = 1;
		all->ray.plany = -0.66;
    }
	if (all->map.spawn_orientation == 'E')
    {
		all->ray.diry = 1;
		all->ray.planx = 0.66;
    }	
    if (all->map.spawn_orientation == 'W')
    {
		all->ray.diry = -1;
		all->ray.planx = -0.66;
    }	
}

void    ft_ray_init(t_all *all)
{
    all->ray.dirx = 0;
    all->ray.diry = 0;
    all->ray.planx = 0;
    all->ray.plany = 0;
    all->ray.posx = all->map.spawn_x;
    all->ray.posy = all->map.spawn_y;
    ft_init_dir(all);
}