/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** file_to_string.c
*/

#include "lib.h"

char *file_to_string(char *pathname)
{
    int fd = open(pathname, O_RDONLY);
    if ((fd < 0) || (is_file(fd) == NOT_A_FILE))
        return NULL;
    int file_size = find_size_file(fd);
    if (file_size <= 0)
        return NULL;
    char *final = malloc(sizeof(char) * (file_size + 1));
    if (read(fd, final, file_size) == -1)
        return NULL;
    if (final[0] != '*' || final[file_size - 1] != '*' ||
    (final[file_size - 1] == '\n'))
        return NULL;
    if (file_size == 1 && final[0] == '*') {
        write(1, "o", 1);
        return NULL;
    }
    final[file_size] = '\0';
    close(fd);
    return final;
}
