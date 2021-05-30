/*
** EPITECH PROJECT, 2021
** B-AIA-200-PAR-2-1-n4s-clement.mikula
** File description:
** need_for_stek
*/

#include <stdio.h>

#include "ai.h"

static void init_simulation(void)
{
    dprintf(1, "start_simulation\n");
    empty_getline();
    dprintf(1, "car_forward:1\n");
    empty_getline();
}

static void stop_simulation(void)
{
    dprintf(1, "STOP_SIMULATION\n");
    empty_getline();
    dprintf(2, "stop_simulation\n");
    empty_getline();
}

void need_for_stek(void)
{
    init_simulation();
    loop();
    stop_simulation();
}