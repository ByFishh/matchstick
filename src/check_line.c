/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCY-2-1-matchstick-theo.maringer
** File description:
** check_line
*/

#include "../include/matchstick.h"

static int check_line2(t_data *data, char *line)
{
    if (line == NULL)
        return 0;
    if (line[0] == '\n') {
        my_printf(ERROR_LINE_NOT_IN_RANGE);
        return 0;
    }
    if (my_str_isnum(line) == 0) {
        my_printf(ERROR_NOT_NUMBER);
        return 0;
    }
}

int check_line(t_data *data, char *line)
{
    int num = 0;

    if (check_line2(data, line) == 0)
        return 0;
    num = my_getnbr(line);
    if (num <= 0 || num > data->line) {
        my_printf(ERROR_LINE_NOT_IN_RANGE);
        return 0;
    }
    if (get_nb_stick(data, num) == 0) {
        my_printf(ERROR_NOT_NUMBER);
        return 0;
    }
    data->tmp_line = num;
    return 1;
}