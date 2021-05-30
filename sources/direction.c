/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** direction
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "ai.h"

static int direction_print(float value)
{
    dprintf(1, "wheels_dir:%f\n", value);
    dprintf(2, "wheels_dir:%f\n", value);
    empty_getline();
    return (0);
}

static int direction(int mid, float angle)
{
    if (mid >= 1500)
        return (direction_print(angle > 0 ? 0.005 : -0.005));
    if (mid >= 1250)
        return (direction_print(angle > 0 ? 0.025 : -0.025));
    if (mid >= 1000)
        return (direction_print(angle > 0 ? 0.05 : -0.05));
    if (mid >= 800)
        return (direction_print(angle > 0 ? 0.08 : -0.08));
    if (mid >= 600)
        return (direction_print(angle > 0 ? 0.1 : -0.1));
    if (mid >= 400)
        return (direction_print(angle > 0 ? 0.2 : -0.2));
    if (mid >= 300)
        return (direction_print(angle > 0 ? 0.3 : -0.3));
    if (mid >= 200)
        return (direction_print(angle > 0 ? 0.40 : -0.40));
    if (mid >= 100)
        return (direction_print(angle > 0 ? 0.50 : -0.50));
    return (direction_print(angle > 0 ? 0.80 : -0.80));
}

void handle_direction(char const **lidar)
{
    float left = atof(lidar[LEFT]);
    int mid = atoi(lidar[MID]);
    float right = atof(lidar[RIGHT]);
    float angle = (left - right) / 3010.0;

    direction(mid, angle);
}