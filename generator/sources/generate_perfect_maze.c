/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** generate_perfect_maze.c
*/

#include "lib.h"
#include "generator.h"

node_t *top = NULL;

void push_cell_to_the_position(int random_path)
{
    if (random_path == RIGHT)
        push_front((ROW), (COL + ONE));
    if (random_path == LEFT)
        push_front((ROW), (COL - ONE));
    if (random_path == UP)
        push_front((ROW - ONE), (COL));
    if (random_path == DOWN)
        push_front((ROW + ONE), (COL));
}

char **last_step(char **map, int max_row, int max_col)
{
    int i = (max_col - ONE);
    for (; i > 0; i--) {
        if (map[max_row - TWO][i] == 'X') {
            map[max_row - ONE][i] = '*';
            continue;
        }
        break;
    }
    map[max_row - ONE][i] = '*';
    return map;
}

char **loop(direction_t *dir, char **map, int max_row, int max_col)
{
    int random_path = 0;

    while (top) {
        check_neighbours(dir, map, max_row, max_col);
        if (check_possibility(dir) == 1) {
            pop_stack();
            continue;
        }
        random_path = generate_ramdon_number(dir);
        push_cell_to_the_position(random_path);
        map[ROW][COL] = '*';
    }
    map = last_step(map, max_row, max_col);
    return map;
}

void hardcode_perfect(char **map, int x, int y)
{
    if (x == 2 && y == 2) {
        map[0][0] = '*';
        map[0][1] = '*';
        map[1][0] = '*';
        map[1][1] = '*';
    }
    if (x == 2 && y != 2) {
        map[0][0] = '*';
        for (int i = 1; i < y; i++)
            map[i][1] = '*';
    }
    if (x != 2 && y == 2) {
        int i = 0;
        for (i = 0; i < x; i++)
            map[0][i] = '*';
        map[1][i - 1] = '*';
    }
    print_map(map);
}

int generate_perfect_maze(int x, int y)
{
    direction_t *dir = malloc(sizeof(direction_t));
    memset(dir, 0, sizeof(direction_t));
    char **map = generate_grid(y, x);
    if (x == 2 || y == 2) {
        hardcode_perfect(map, x, y);
        return 0;
    }
    push_front(1, 1);
    map[ROW][COL] = '*';
    map = loop(dir, map, y, x);
    print_map(map);
    free(dir);
    free_map(map);
    return 0;
}
