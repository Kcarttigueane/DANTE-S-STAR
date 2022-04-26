/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** print_queue.c
*/

#include "solver.h"

void print_queue(node_t **front, node_t **rear)
{
    if ((*front == NULL) && (*rear == NULL)) {
        printf("\nQueue is Empty\n");
        return;
    }
    node_t *temp = *front;
    printf("---------------\n");
    while (temp) {
        printf("\033[1;33m");
        printf("\nrow : %i\n", temp->row);
        printf("col : %i\n\n", temp->col);
        printf("g_cost : %i\n\n", temp->g_cost);
        printf("\033[0m");
        temp = temp->next;
    }
    printf("---------------\n");
}
