/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** generator.h
*/

#ifndef GENERATOR_H_
    #define GENERATOR_H_

    #include <stdlib.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <time.h>

    // INCLUDE HEADER FILES :

    #include "data_struct.h"

    // DEFINE :

    #define ONE 1
    #define TWO 2

    #define RIGHT 1
    #define LEFT 2
    #define UP 3
    #define DOWN 4

    #define OK 0
    #define NOT_OK 1

    #define ROW top->row
    #define COL top->col

// ! CREATE MAP FULL OF WALLS :

char **generate_grid(int max_row, int max_cols);

// ! STACK FUNTIONS -> DYNAMIC USING LINKED LIST :

void push_front(int row, int col);
void print_stack(void);
void pop_stack(void);

// !  MAZE GENERATOR --> CHEKCING NEIGHBOURS :

void check_neighbours(direction_t *dir, char **map, int max_row, int max_cols);
int check_left_and_right(char **map, int row, int col);
int check_up_and_down(char **map, int row, int col);
int check_possibility(direction_t *direction);
void check_down(direction_t *dir, char **map);
void check_up(direction_t *dir, char **map);
void check_right(direction_t *dir, char **map);
void check_left(direction_t *dir, char **map);

    // ALGROITHM Functions :

int generate_perfect_maze(int x, int y);
void push_cell_to_the_position(int random_path);
char **last_step(char **map, int max_row, int max_col);
char **loop(direction_t *dir, char **map, int max_row, int max_col);
void hardore_perfect(char **map, int x, int y);

int generate_imperfect_maze(int x, int y);
int random_number(void);
void update_map(char **map, int i, int j);
void hardcode_imperfect(int x, int y);


// ! CHOOSE DIRECTION RANDOMLY :

int count_the_number_of_possibility(direction_t *direction);
int generate_ramdon_number(direction_t *direction);

#endif /* GENERATOR_H_ */
