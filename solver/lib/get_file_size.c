/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** get_file_size.c
*/

#include "lib.h"

int find_size_file(int fd)
{
    struct stat file_stat;
    if (fstat(fd, &file_stat) == -1)
        return -1;
    unsigned int file_size = file_stat.st_size;
    return file_size;
}
