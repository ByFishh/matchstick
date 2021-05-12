/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** init_map
*/

#include "../include/matchstick.h"

static void init_char(t_data *data)
{
    int stick = 1;
    int space = (data->row - stick) / 2;
    int tmp = 1;

    for (int i = 0; i != data->line; i++) {
        for (int j = 0; j != stick; j++) {
            data->map[i][j + space] = tmp;
            tmp++;
        }
        stick += 2;
        space = (data->row - stick) / 2;
        tmp = 1;
    }
}

void init_map(t_data *data)
{
    data->row = 1;

    for (int i = 1; i != data->line; i++, (data->row += 2));

    data->map = malloc(sizeof(int *) * data->line);

    for (int i = 0; i != data->line; i++) {
        data->map[i] = malloc(sizeof(int) * data->row);
        for (int j = 0; j != data->row; j++)
            data->map[i][j] = 0;
    }

    init_char(data);
}