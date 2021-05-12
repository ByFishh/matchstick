/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCY-2-1-matchstick-theo.maringer
** File description:
** ai
*/

#include "../include/matchstick.h"

void ia(t_data *data)
{
    my_printf("AI's turn...\n");
    for (int i = 1; i != data->line + 1; i++)
        if (get_nb_stick(data, i) != 0)
            data->tmp_line = i;
    data->tmp_matches = 1;
    my_printf(IA_REMOVED, data->tmp_matches, data->tmp_line);
    remove_stick(data, data->tmp_line, data->tmp_matches);
    display_map(data);
}