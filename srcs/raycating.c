/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycating.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:09:32 by fcavillo          #+#    #+#             */
/*   Updated: 2021/03/11 11:46:15 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void    ft_set_textures(t_all *all)
{
    
}

void     ft_set_window_size(t_all *all)
{
    if (all->data.screenx > all->win.x)
        all->win.x = all->data.screenx;    
    if (all->data.screeny > all->win.y)
        all->win.y = all->data.screeny;    
}

int     ft_ray(t_all *all)
{
    ft_ray_init(all);
    if (!(all->data.mlx_ptr = mlx_init()))
        ft_error(all, "Mlx init failed\n");
    mlx_get_screen_size(all->data.mlx_ptr, &all->data.screenx, &all->data.screeny);
    ft_set_window_size(all);
    ft_set_textures(all);
    

    return(0);
}