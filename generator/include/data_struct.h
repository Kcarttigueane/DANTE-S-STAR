/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** data_struct.h
*/

#ifndef DATA_STRUCT_H_
    #define DATA_STRUCT_H_

typedef struct node {
    int row;
    int col;
    struct node *next;
} node_t;

typedef struct Directions {
    int left;
    int right;
    int up;
    int down;
} direction_t;

#endif/*DATA_STRUCT_H_*/
