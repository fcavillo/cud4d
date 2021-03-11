/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycating.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:09:32 by fcavillo          #+#    #+#             */
/*   Updated: 2021/03/11 11:01:29 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int     ft_ray(t_all *all)
{
    ft_ray_init(all);
    if (!(all->data.mlx_ptr = mlx_init()))
        ft_error(all, "Mlx init failed\n");
    mlx_get_screen_size(all->data.mlx_ptr, &all->data.screenx, &all->data.screeny);
    printf("x = %d, y = %d\n", all->data.screenx, all->data.screeny);


    return(0);
}