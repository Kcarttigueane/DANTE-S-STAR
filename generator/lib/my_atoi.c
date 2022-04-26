/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** my_getnbr.c
*/

#include "lib.h"

int my_atoi(char const *str)
{
    if (my_str_isnum(str) == 1)
        return -1;
    return atoi(str);
}
