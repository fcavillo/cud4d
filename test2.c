# include "minilibx-linux/mlx.h"


typedef struct  s_data {
    void        *img;
    char        *addr;
    int         bits_per_pixel;
    int         line_length;
    int         endian;
}               t_data;

void            my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
    char    *dst;

    dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}

int             main(void)
{
    void    *mlx;
    void    *mlx_win;
    t_data  img;

    mlx = mlx_init();
    mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
    img.img = mlx_new_image(mlx, 1920, 1080);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
                                 &img.endian);
    my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
    mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
    mlx_loop(mlx);
}

/*
int     main(void)
{
    void    *mlx;
    void    *mlx_win;

    mlx = mlx_init();
    mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
    mlx_loop(mlx);
}   

typedef struct  s_data {
    void        *img;
    char        *addr;
    int         bits_per_pixel;
    int         line_length;
    int         endian;
}               t_data;

void            my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
    char    *dst;

    dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}


int             main(void)
{
    void    *mlx;
    void    *mlx_win;
    //int i = 0;
    t_data  img;

mlx = mlx_init();
mlx_win = mlx_new_window(mlx, 1500, 1080, "Hello world!");
mlx_loop(mlx);

    mlx = mlx_init();
    mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
    img.img = mlx_new_image(mlx, 1920, 1080);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
                                 &img.endian);
    for (int i = 0; i < 500; i++)
        my_mlx_pixel_put(&img, i, i, 0x00FF00FF);
    for (int i = 0; i < 500; i++)
        my_mlx_pixel_put(&img, i, 5, 0x00FF0000);
    for (int i = 0; i < 500; i++)
        my_mlx_pixel_put(&img, 5, i, 0x00FFFFFF);
    for (int i = 0; i < 500; i++)
        my_mlx_pixel_put(&img, 500, i, 0x000000FF);
    for (int i = 0; i < 500; i++)
        my_mlx_pixel_put(&img, i, 500, 0x00000000);
    for (int i = 0; i < 500; i++)
        my_mlx_pixel_put(&img, 5, i, 0x00FF00FF);
    mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
    mlx_loop(mlx);
}*/