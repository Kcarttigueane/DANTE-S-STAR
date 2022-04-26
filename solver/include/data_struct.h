/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** data_struct.h
*/

#ifndef DATA_STRUCT_H_
    #define DATA_STRUCT_H_

typedef struct file {
    unsigned int size_file;
} file_t;
typedef struct node {
    int row;
    int col;
    int g_cost;
    struct node *next;
} node_t;

typedef struct map {
    char **map;
    int **array;
    int max_row;
    int max_col;
} map_t;

#endif/*DATA_STRUCT_H_*/
