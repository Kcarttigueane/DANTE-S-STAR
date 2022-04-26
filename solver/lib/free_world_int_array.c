/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** free_world_int_array.c
*/

#include "lib.h"

void free_world_int_array(int **tab, int row)
{
    for (int i = 0; i < row; i++)
        free(tab[i]);
    free(tab);
}
