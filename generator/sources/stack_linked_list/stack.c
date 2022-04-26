/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** push_front.c
*/

#include "generator.h"

extern node_t *top;

void push_front(int row, int col)
{
    struct node *new = malloc(sizeof(struct node));

    if (new == NULL) {
        printf("Stack Overflow\n");
        exit(1);
    }
    new->row = row;
    new->col = col;
    new->next = NULL;
    new->next = top;
    top = new;
}

void print_stack(void)
{
    if (top == NULL) {
        printf("Stack Empty\n");
        return;
    }
    struct node *temp = top;

    while (temp) {
        printf("+ - - - - - - - +\n");
        printf("|  %i    |   %i   |\n", temp->row, temp->col);
        printf("+ - - - - - - - +\n");
        temp = temp->next;
        printf("\n");
    }
}

void pop_stack(void)
{
    if (top == NULL) {
        printf("Stack underflow : nothing in the stack\n");
        return;
    }
    struct node *temp = top;
    top = top->next;
    free(temp);
    temp = NULL;
}
