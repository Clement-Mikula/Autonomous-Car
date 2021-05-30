/*
** EPITECH PROJECT, 2021
** B-AIA-200-PAR-2-1-n4s-clement.mikula
** File description:
** loop
*/

#include <stdio.h>
#include <stdbool.h>

#include "ai.h"

static char **get_lidar_info(void)
{
    char **tab;
    char *word = NULL;
    size_t size = 0;

    dprintf(1, "GET_INFO_LIDAR\n");
    getline(&word, &size, stdin);
    tab = str_split(word, ":");
    return (tab);
}

void loop(void)
{
    char **lidar = get_lidar_info();

    while (!((get_array_len((char const **)lidar) > 34) &&
            end_check(lidar[35]))) {
        if (get_array_len((char const **)lidar) > 30) {
            handle_direction((char const **)lidar);
            handle_speed((char const **)lidar);
        }
        array_free(lidar);
        lidar = get_lidar_info();
        for (int i = 0; lidar[i] != NULL; dprintf(2, "%s\n", lidar[i++])) {}
    }
    array_free(lidar);
}