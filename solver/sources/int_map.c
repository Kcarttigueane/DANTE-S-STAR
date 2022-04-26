/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** int_map.c
*/

#include "solver.h"

void update_map(map_t *map, int i)
{
    for (int j = 0; j < map->max_col; j++) {
        if (map->map[i][j] == 'X')
            map->array[i][j] = 1;
        if (map->map[i][j] == '*')
            map->array[i][j] = 0;
    }
}

void create_int_map(map_t *map)
{
    map->array = malloc(sizeof(int *) * (map->max_row + 1));

    for (int i = 0; i < map->max_row; i++) {
        map->array[i] = malloc(sizeof(int) * (map->max_col));
        update_map(map, i);
    }
    map->array[map->max_row] = NULL;
}

void print_int_map(map_t *map)
{
    for (int k = 0; k < map->max_row; k++) {
        for (int l = 0; l < map->max_col; l++) {
            my_put_nbr(map->array[k][l]);
            write(1, "  ", 3);
        }
        printf("\n");
    }
}
