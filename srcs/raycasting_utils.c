/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:32:11 by fcavillo          #+#    #+#             */
/*   Updated: 2021/03/12 14:39:51 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int     ft_raycast(t_all *all)
{
    all->ray.x = 0;
    while (all->ray.x < all->win.x)
    {
        ft_ray_init_2(all);
        
    }
}