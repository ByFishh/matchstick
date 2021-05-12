/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** game
*/

#include "../include/matchstick.h"

static int check_matches2(t_data *data, int num)
{
    if (num <= 0) {
        my_printf(ERROR_MATCHES_AT_LEAST);
        return 0;
    }
    if (num > data->max_matches) {
        my_printf(ERROR_TO_MANY, data->max_matches);
        return 0;
    }
    if (num > get_nb_stick(data, data->tmp_line)) {
        my_printf(ERROR_NOT_ENOUGH);
        return 0;
    }
}

static int check_matches(t_data *data, char *line)
{
    int num = 0;

    if (line == NULL)
        return 0;
    if (line[0] == '\n') {
        my_printf(ERROR_MATCHES_AT_LEAST);
        return 0;
    }
    if (my_str_isnum(line) == 0) {
        my_printf(ERROR_NOT_NUMBER);
        return 0;
    }
    num = my_getnbr(line);
    if (check_matches2(data, num) == 0)
        return 0;
    data->tmp_matches = num;
    return 1;
}

static int player(t_data *data)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t lineSize = 0;

    while (check_line(data, line) == 0) {
        my_printf("Line: ");
        if (getline(&line, &len, stdin) == -1)
            return 3;
    }
    line = NULL;
    my_printf("Matches: ");
    if (getline(&line, &len, stdin) == -1)
        return 3;
    if (check_matches(data, line) == 1) {
        my_printf(PLAYER_REMOVED, data->tmp_matches, data->tmp_line);
        remove_stick(data, data->tmp_line, data->tmp_matches);
        display_map(data);
        data->tmp = 1;
    }
    free(line);
}

void game(t_data *data)
{
    while (is_win(data) == 0) {
        data->tmp = 0;
        my_printf("Your turn:\n");
        while (data->tmp != 1)
            if (player(data) == 3) {
                data->state = 0;
                return;
            }
        if (is_win(data) == 1) {
            data->state = 2;
            my_printf("You lost, too bad...\n");
            break;
        }
        ia(data);
        if (is_win(data) == 1) {
            data->state = 1;
            my_printf("I lost... snif... but I'll get you next time!!\n");
            break;
        }
    }
}