/*
** EPITECH PROJECT, 2021
** Sans titre(Espace de travail)
** File description:
** print_map.c
*/

#include <stdio.h>

void print_map(char **map)
{
    int i = 0;
    for (; map[i + 1]; i++)
        printf("%s\n", map[i]);
    printf("%s", map[i]);
}

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
            if (map[i][j] == '*') {
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
