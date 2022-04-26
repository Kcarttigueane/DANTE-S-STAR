/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** dequeue.c
*/

#include "solver.h"

node_t *dequeue(node_t **front, node_t **rear)
{
    if ((*front == NULL) && (*rear == NULL)) {
        printf("Queue empty : nothing to dequeue\n");
        return NULL;
    }
    node_t *temp = *front;
    node_t *save = malloc(sizeof(node_t));
    save->row = (*front)->row;
    save->col = (*front)->col;
    save->g_cost = (*front)->g_cost;
    (*front) = (*front)->next;
    if ((*front) == NULL)
        *rear = NULL;
    else {
        free(temp);
        temp = NULL;
    }
    return save;
}
