/*
** EPITECH PROJECT, 2021
** B-AIA-200-PAR-2-1-n4s-clement.mikula
** File description:
** array_free
*/

#include <stdlib.h>

char **array_free(char **array)
{
    for (int i = 0; array[i]; ++i)
        free(array[i]);
    free(array);
    return (NULL);
}