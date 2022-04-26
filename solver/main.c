/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** main.c
*/

#include "bonus.h"
#include "solver.h"

#define UP -1
#define DOWN +1
#define LEFT -1
#define RIGHT +1

const int row_dir[4] = {UP, DOWN, 0, 0};
const int col_dir[4] = {0, 0, LEFT, RIGHT};

const int fr[4] = {UP, 0, 0, DOWN};
const int fc[4] = {0, LEFT, RIGHT, 0};

void solver(map_t *map, node_t **front, node_t **rear)
{
    create_int_map(map);
    map->array[0][0] = 1;
    int rr = 0;
    int cc = 0;
    int row = 0;
    int col = 0;
    int g_cost = 1;

    enqueue(front, rear, row, col, g_cost);
    node_t *dequeue_node;

    while (*front != NULL && *rear != NULL) {
        dequeue_node = dequeue(front, rear);
        if (dequeue_node == NULL)
            continue;
        row = dequeue_node->row;
        col = dequeue_node->col;
        g_cost = dequeue_node->g_cost;
        free(dequeue_node);
        for (int i = 0; i < 4; i++) {
            rr = row + row_dir[i];
            cc = col + col_dir[i];
            if (rr < 0 || cc < 0 || rr >= map->max_row || cc >= map->max_col)
                continue;
            if (map->array[rr][cc] != 0)
                continue;
            map->array[rr][cc] = g_cost + ONE;
            if (rr == (map->max_row - ONE) && cc == (map->max_col - ONE))
                return;
            enqueue(front, rear, rr, cc, (g_cost + ONE));
        }
    }
}

void draw_final_path(map_t *map)
{
    int k = map->array[map->max_row - ONE][map->max_col - ONE];

    int rr = 0;
    int cc = 0;
    int r = map->max_row - ONE;
    int c = map->max_col - ONE;

    map->map[map->max_row - ONE][map->max_col - ONE] = 'o';

    while (k != 1) {
        for (int i = 0; i < 4; i++) {
            rr = r + fr[i];
            cc = c + fc[i];
            if (rr < 0 || cc < 0)
                continue;
            if (rr >= map->max_row || cc >= map->max_col)
                continue;
            if (map->array[rr][cc] == (k - ONE)) {
                map->map[rr][cc] = 'o';
                k--;
                r = rr;
                c = cc;
                break;
            }
        }
    }
    print_map_color(map->map);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return 84;
    map_t *map = malloc(sizeof(map_t));
    if ((map->map = file_error_handling(argv)) == NULL)
        return 84;
    node_t *front = NULL;
    node_t *rear = NULL;
    map->max_row = get_nb_row(map->map);
    map->max_col = strlen(map->map[0]);
    solver(map, &front, &rear);
    draw_final_path(map);
    free_map(map->map);
    return 0;
}
