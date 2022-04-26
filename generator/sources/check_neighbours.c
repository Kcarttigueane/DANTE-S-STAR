/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** check_neighbours.c
*/

#include "lib.h"
#include "generator.h"

extern node_t *top;

int check_possibility(direction_t *direction)
{
    if (direction->left == 0 && direction->right == 0 &&
    direction->up == 0 && direction->down == 0)
        return 1;
    return 0;
}

int check_up_and_down(char **map, int row, int col)
{
    if ((map[row - ONE][col] != 'X') || (map[row + ONE][col] != 'X'))
        return NOT_OK;
    return OK;
}

int check_left_and_right(char **map, int row, int col)
{
    if ((map[row][col + ONE] != 'X') || (map[row][col - ONE] != 'X'))
        return NOT_OK;
    return OK;
}
