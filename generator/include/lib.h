/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** lib.h
*/

#ifndef LIB_H_
    #define LIB_H_

    // include library :

    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <string.h>

    // Functions prototypes :

void print_map(char **map);
void print_map_color(char **map);
int my_atoi(char const *str);
int my_str_isnum(char const *str);
char **malloc_2d_array(int nb_rows, int nb_cols);
void free_map(char **map);

#endif/*LIB_H_*/
