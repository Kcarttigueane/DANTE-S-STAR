/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** main.c
*/

#include "lib.h"
#include "generator.h"

void hardcode(int x, int y)
{
    if (x == 1 && y == 1) {
        write(1, "*", 1);
        return;
    }
    if (y == 1) {
        for (int i = 0; i < x; i++)
            write(1, "*", 1);
        return;
    }
    if (x == 1) {
        for (int i = 0; (i  + 1) < y; i++)
            write(1, "*\n", 2);
        write(1, "*", 1);
        return;
    }
}

int main(int argc, char **argv)
{
    if (argc < 3 || argc > 4)
        return 84;
    int x = my_atoi(argv[1]);
    int y = my_atoi(argv[2]);
    if (x == -1 || x == 0 || y == -1 || y == 0)
        return 84;
    if (x < 2 || y < 2) {
        hardcode(x, y);
        return 0;
    }
    srand(time(NULL));
    if ((argc == 3 || (argc == 4 && strcmp("imperfect", argv[3]) == 0)))
        return (generate_imperfect_maze(x, y));
    if (argc == 4 && strcmp("perfect", argv[3]) == 0)
        return (generate_perfect_maze(x, y));
    return 84;
}
