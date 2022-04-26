/*
** EPITECH PROJECT, 2021
** B-CPE-200-LYN-2-1-dante-tom.desalmand
** File description:
** check_neighbours_part_two.c
*/

#include "lib.h"
#include "generator.h"

extern node_t *top;

void check_left(direction_t *dir, char **map)
{
    if ((map[ROW][COL - ONE] == 'X') && (map[ROW][COL - TWO] == 'X'))
        if ((check_up_and_down(map, ROW, (COL - ONE)) == OK) &&
        (check_up_and_down(map, ROW, (COL - TWO)) == OK))
            dir->left = LEFT;
}

void check_right(direction_t *dir, char **map)
{
    if ((map[ROW][COL + ONE] == 'X') && (map[ROW][COL + TWO] == 'X'))
        if ((check_up_and_down(map, ROW, (COL + ONE)) == OK) &&
        (check_up_and_down(map, ROW, (COL + TWO)) == OK))
            dir->right = RIGHT;
}

void check_up(direction_t *dir, char **map)
{
    if ((map[ROW - ONE][COL] == 'X') && (map[ROW - TWO][COL] == 'X'))
        if ((check_left_and_right(map, (ROW - ONE), COL) == OK) &&
        (check_left_and_right(map, (ROW - TWO), COL) == OK))
            dir->up = UP;
}

void check_down(direction_t *dir, char **map)
{
    if ((map[ROW + ONE][COL] == 'X') && (map[ROW + TWO][COL] == 'X'))
        if ((check_left_and_right(map, (ROW + ONE), COL) == OK) &&
        (check_left_and_right(map, (ROW + TWO), COL) == OK))
            dir->down = DOWN;
}

void check_neighbours(direction_t *dir, char **map, int max_row, int max_cols)
{
    memset(dir, 0, sizeof(direction_t));

    if ((COL - 2) >= 0)
        check_left(dir, map);
    if ((COL + 2) < max_cols)
        check_right(dir, map);
    if ((ROW - 2) >= 0)
        check_up(dir, map);
    if ((ROW + 2) < max_row)
        check_down(dir, map);
}
