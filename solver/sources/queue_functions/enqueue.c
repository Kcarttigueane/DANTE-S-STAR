/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** enqueue.c
*/

#include "solver.h"

void enqueue(node_t **front, node_t **rear, int row, int col, int g_cost)
{
    node_t *new = malloc(sizeof(node_t));
    if (new == NULL) {
        printf("Overflow\n");
        return;
    }
    new->row = row;
    new->col = col;
    new->g_cost = g_cost;
    new->next = NULL;
    if ((*front == NULL) && (*rear == NULL)) {
        (*front) = new;
        (*rear) = new;
        return;
    }
    (*rear)->next = new;
    (*rear) = new;
}
