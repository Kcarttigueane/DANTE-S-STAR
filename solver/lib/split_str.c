/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** split_str.c
*/

#include "lib.h"

unsigned int count_tokens(char *str, char *delimiter)
{
    if (!str || !delimiter)
        return 0;

    unsigned int nb_token = 0;
    char *str_cpy = strdup(str);
    for (char *save = str_cpy; (strtok_r(save, delimiter, &save)); nb_token++);
    free(str_cpy);
    return nb_token;
}

char **split_str(char *str, char *delimiter)
{
    unsigned int token_count = 0;
    if (str == NULL || (token_count = count_tokens(str, delimiter)) == 0 ||
    delimiter == NULL)
        return NULL;

    char *str_cpy = strdup(str);
    char *save = str_cpy;
    char **world_array = malloc(sizeof(char *) * (token_count + 1));
    char *token;

    for (int i = 0; (token = strtok_r(save, delimiter, &save)); i++) {
        world_array[i] = malloc(sizeof(char) * (strlen(token) + 1));
        strcpy(world_array[i], token);
    }
    world_array[token_count] = NULL;
    free(str_cpy);
    return world_array;
}
