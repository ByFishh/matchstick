/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** matchstick
*/

#include "my.h"

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

#define ERROR_LINE "Error: impossible to have %d line. (1 < n < 100)\n"
#define ERROR_MATCHE "Error: impossible to have %d max matches. (n > 0)\n"
#define ERROR_NOT_NUMBER "Error: invalid input (positive number expected)\n"
#define ERROR_LINE_NOT_IN_RANGE "Error: this line is out of range\n"
#define ERROR_MATCHES_AT_LEAST "Error: you have to remove at least one match\n"
#define ERROR_NOT_ENOUGH "Error: not enough matches on this line\n"
#define ERROR_TO_MANY "Error: you cannot remove more than %d matches per turn\n"
#define PLAYER_REMOVED "Player removed %d match(es) from line %d\n"
#define IA_REMOVED "AI removed %d match(es) from line %d\n"

typedef struct s_data {
    int tmp_line;
    int tmp_matches;
    int line;
    int row;
    int max_matches;
    int **map;
    int state;
    int tmp;
} t_data;

void init_map(t_data *data);
void game(t_data *data);
void display_map(t_data *data);
int get_nb_stick(t_data *data, int line);
void remove_stick(t_data *data, int line, int nb);
int is_win(t_data *data);
void ia(t_data *data);
int check_line(t_data *data, char *line);

#endif
