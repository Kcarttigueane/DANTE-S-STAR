/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** file_error_handling.c
*/

#include "solver.h"

int inside_condition_valid_char(char **map, int i)
{
    for (int j = 0; map[i][j]; j++)
        if (map[i][j] != 'X' && map[i][j] != '*')
            return 84;
    return 0;
}

int map_contain_valid_char(char **map)
{
    for (int i = 0; map[i]; i++)
        if (inside_condition_valid_char(map, i) == 84)
            return 84;
    return 0;
}

int check_map_rectangular(char **map)
{
    size_t first_line_len = strlen(map[0]);

    for (int i = 0; map[i]; i++)
        if (first_line_len != (strlen(map[i])))
            return 84;
    return 0;
}

char **file_error_handling(char **argv)
{
    char *string_file = file_to_string(argv[1]);
    if (string_file == NULL)
        return NULL;
    char **map = split_str(string_file, "\n");
    free(string_file);
    if (map_contain_valid_char(map) == 84 ||
    check_map_rectangular(map) == 84)
        return NULL;
    return map;
}
