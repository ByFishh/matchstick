/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** main
*/

#include "../include/matchstick.h"

static void free_memory(t_data *data)
{
    for (int i = 0; i != data->line; i++)
        free(data->map[i]);
    free(data->map);
}

int main(int arg, char **args)
{
    t_data data;
    if (arg != 3)
        return 84;
    data.line = my_getnbr(args[1]);
    data.max_matches = my_getnbr(args[2]);
    data.state = 0;
    data.tmp_line = 0;
    data.tmp_matches = 0;
    if (!(data.line >= 2 && data.line <= 99)) {
        my_printf(ERROR_LINE, data.line);
        return 84;
    } else if (data.max_matches <= 0) {
        my_printf(ERROR_MATCHE, data.max_matches);
        return 84;
    } else {
        init_map(&data);
        display_map(&data);
        game(&data);
    }
    free_memory(&data);
    return data.state;
}