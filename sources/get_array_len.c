/*
** EPITECH PROJECT, 2021
** B-AIA-200-PAR-2-1-n4s-clement.mikula
** File description:
** get_array_len
*/

#include <stdlib.h>

int get_array_len(char const **array)
{
    int len = 0;

    for (; array[len] != NULL; len += 1) {}
    return (len);
}
