/*
** EPITECH PROJECT, 2021
** B-PSU-200-LYN-2-1-mysokoban-kevin.carttigueane
** File description:
** is_file.c
*/

#include "lib.h"

int is_file(int fd)
{
    struct stat file_stat;
    if (fstat(fd, &file_stat) == -1)
        return NOT_A_FILE;
    if (!(S_ISREG(file_stat.st_mode)))
        return IS_A_FILE;
    return IS_A_FILE;
}
