/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** empty_getline
*/

#include <stdio.h>

void empty_getline(void)
{
    char *buffer = NULL;
    size_t len = 0;

    getline(&buffer, &len, stdin);
}