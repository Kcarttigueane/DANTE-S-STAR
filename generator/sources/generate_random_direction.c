/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** generate_random_direction.c
*/

#include "generator.h"

int count_the_number_of_possibility(direction_t *direction)
{
    int nb_of_possibility = 0;

    if (direction->left == LEFT)
        nb_of_possibility++;
    if (direction->right == RIGHT)
        nb_of_possibility++;
    if (direction->up == UP)
        nb_of_possibility++;
    if (direction->down == DOWN)
        nb_of_possibility++;
    return nb_of_possibility;
}

int generate_ramdon_number(direction_t *direction)
{
    int nb_possibility = count_the_number_of_possibility(direction);
    int array[nb_possibility];
    int i = 0;

    if (direction->left == LEFT)
        array[i++] = direction->left;
    if (direction->right == RIGHT)
        array[i++] = direction->right;
    if (direction->up == UP)
        array[i++] = direction->up;
    if (direction->down == DOWN)
        array[i++] = direction->down;

    return array[rand() % nb_possibility];
}
