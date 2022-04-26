/*
** EPITECH PROJECT, 2021
** Sans titre(Espace de travail)
** File description:
** print_map.c
*/

#include "bonus.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void red () {
    printf("\033[1;31m");
}

void blue () {
    printf("\033[1;34m");
}

void reset ()
{
    printf("\033[0m");
}

void print_map_color(char **map)
{
    int i = 0;
    for (; map[i]; i++) {
        for (int j = 0; map[i][j]; j++) {
            if (map[i][j] == 'o') {
                red();
                printf("%c", map[i][j]);
                reset();
            }
            else {
                blue();
                printf("%c", map[i][j]);
                reset();
            }
        }
        printf("\n");
    }
}

void print_map(char **map)
{
    int i = 0;
    for (i = 0; map[i + 1]; i++)
        printf("%s\n", map[i]);
    printf("%s", map[i]);
}
