/*
** EPITECH PROJECT, 2021
** DANTE_STAR
** File description:
** lib.h
*/

#ifndef LIB_H_
    #define LIB_H_

    // include library :

    #include <stdlib.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <time.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

    // DEFINE :

    #define IS_A_FILE 0
    #define NOT_A_FILE 1

    // Functions prototypes :

// Display functions :

int my_str_isnum(char const *str);
void my_put_nbr(int nb);

int my_atoi(char const *str);

// FILE HANDLING FUNCTIONS :

// int is_file(char *pathname);
int is_file(int fd);
int find_size_file(int fd);
char *file_to_string(char *pathname);

char **malloc_2d_array(int nb_rows, int nb_cols);
void free_map(char **map);
void free_world_int_array(int **tab, int row);
int get_nb_row(char **map);

void print_map(char **map);

// SPLIT STR FUNCTIONS :

unsigned int count_tokens(char *str, char *delimiter);
char **split_str(char *str, char *delimiter);

#endif/* !LIB_H_ */
