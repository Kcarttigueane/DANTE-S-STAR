/*
** EPITECH PROJECT, 2021
** B-CPE-200-LYN-2-1-dante-tom.desalmand
** File description:
** generate_imperfect_maze.c
*/

#include "lib.h"
#include "generator.h"

extern node_t *top;

int random_number(void)
{
    return (rand() % 2);
}

void update_map(char **map, int i, int j)
{
    if (map[i][j] == 'X')
        if (random_number() == 1)
            map[i][j] = '*';
}

void hardcode_imperfect(int x, int y)
{
    for (int i = 0; (i + 1) < y; i++) {
        for (int j = 0; j < x; j++)
            write(1, "*", 1);
        write(1, "\n", 1);
    }
    for (int i = 0; i < x; i++)
        write(1, "*", 1);
}

int generate_imperfect_maze(int x, int y)
{
    if (x == 2 || y == 2) {
        hardcode_imperfect(x, y);
        return 0;
    }
    direction_t *dir = malloc(sizeof(direction_t));
    char **map = generate_grid(y, x);
    push_front(1, 1);
    map[ROW][COL] = '*';
    map = loop(dir, map, y, x);
    for (int i = 1; map[i]; i++)
        for (int j = 0; map[i][j]; j++)
            update_map(map, i, j);
    print_map(map);
    free(dir);
    free_map(map);
    return 0;
}
