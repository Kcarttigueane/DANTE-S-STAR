/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** is_num.c
*/

#include "lib.h"

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[i] == '\0' || str == NULL)
        return 1;
    for (i = 0; str[i] != '\0'; i++)
        if ((str[i] < '0') && (str[i] > '9'))
            return 1;
    return 0;
}
