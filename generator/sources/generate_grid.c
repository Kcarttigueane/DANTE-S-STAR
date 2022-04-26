/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** generate_grid.c
*/

#include "lib.h"
#include "generator.h"

char **generate_grid(int max_row, int max_cols)
{
    char **grid_map = malloc_2d_array(max_row, max_cols);

    for (int i = 0, j = 0; grid_map[i]; i++)
        for (j = 0; j < max_cols; j++)
            grid_map[i][j] = 'X';
    grid_map[0][0] = '*';
    grid_map[0][1] = '*';
    return grid_map;
}
