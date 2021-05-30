/*
** EPITECH PROJECT, 2021
** solver
** File description:
** str_split
*/

#include <stdlib.h>
#include <stdbool.h>

#include "ai.h"

static bool is_delim(char c, char const *delim)
{
    for (int i = 0; delim[i]; ++i) {
        if (c == delim[i])
            return (true);
    }
    return (false);
}

static int get_word_len(char const *str, char const *delim)
{
    int i = 0;

    for (; !is_delim(str[i], delim) && str[i]; ++i) {}
    return (i);
}

static int get_nb_word(char const *str, char const *delim)
{
    int nb = 1;

    for (int i = 0; str[i]; ++i) {
        if (is_delim(str[i], delim))
            ++nb;
    }
    return (nb);
}

char **str_split(char const *str, char const *delim)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int len = 0;
    int nb_word = get_nb_word(str, delim);
    char **arr = malloc(sizeof(char *) * (nb_word + 1));

    if (!arr)
        return (NULL);
    for (; i < nb_word; ++i) {
        len = get_word_len(&str[k], delim);
        arr[i] = malloc(sizeof(char) * (len + 1));
        if (!arr[i])
            return (array_free(arr));
        for (j = 0; j < len; ++j)
            arr[i][j] = str[k++];
        arr[i][j] = '\0';
        ++k;
    }
    arr[i] = NULL;
    return (arr);
}