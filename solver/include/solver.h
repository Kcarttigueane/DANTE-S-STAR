/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** solver.h
*/

#ifndef SOLVER_H_
    #define SOLVER_H_

    // DEFINE :

    #define ONE 1
    #define TWO 2

    #define UP -1
    #define DOWN +1
    #define LEFT -1
    #define RIGHT +1

    // include libraries :

    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <string.h>
    #include <math.h>

    // Include .h files :

    #include "data_struct.h"
    #include "lib.h"

void enqueue(node_t **front, node_t **rear, int row, int col, int g_cost);
node_t *dequeue(node_t **front, node_t **rear);
void print_queue(node_t **front, node_t **rear);
int is_queue_empty(node_t **front, node_t **rear);
void free_queue(node_t **front, node_t **rear);

    // ! FILE ARG ERROR HANDLING :

int inside_condition_valid_char(char **map, int i);
int map_contain_valid_char(char **map);
int check_map_rectangular(char **map);
char **file_error_handling(char **argv);

void create_int_map(map_t *map);
void print_int_map(map_t *map);

#endif/* SOLVER_H_ */
