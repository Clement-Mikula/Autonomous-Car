/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** speed
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "ai.h"

static int speed_print(float value)
{
    dprintf(1, "car_forward:%.2f\n", value);
    dprintf(2, "car_forward:%.2f\n", value);
    empty_getline();
    return (EXIT_SUCCESS);
}

static int speed(int mid)
{
    if (mid >= 2000)
        return (speed_print(1));
    if (mid >= 1500)
        return (speed_print(0.75));
    if (mid >= 1000)
        return (speed_print(0.5));
    if (mid >= 750)
        return (speed_print(0.4));
    if (mid >= 500)
        return (speed_print(0.25));
    if (mid >= 250)
        return (speed_print(0.15));
    return (speed_print(0.1));
}

void handle_speed(char const **lidar)
{
    int mid = atoi(lidar[MID]);

    speed(mid);
}