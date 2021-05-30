/*
** EPITECH PROJECT, 2021
** tools.h
** File description:
** tools.h
*/

#ifndef AI_H_
#define AI_H_

static const int EXIT_ERROR = 84;

enum lidar_info_e {
    LEFT = 3,
    MID = 18,
    RIGHT = 34
};

int error_handling(int ac);
void handle_direction(char const **lidar);
char **array_free(char **array);
void loop(void);
void need_for_stek(void);
void handle_speed(char const **lidar);
char **str_split(char const *str, char const *delim);
int get_array_len(char const **array);
void empty_getline(void);
int end_check(char const *str);

#endif /* !AI_H_ */