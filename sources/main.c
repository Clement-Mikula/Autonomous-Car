/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include <stdlib.h>
#include <unistd.h>

#include "ai.h"

int main(int ac, char **av)
{
    (void)(av);
    if (error_handling(ac) != EXIT_SUCCESS)
        return (EXIT_ERROR);
    need_for_stek();
    return (EXIT_SUCCESS);
}
