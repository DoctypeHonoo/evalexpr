/*
** EPITECH PROJECT, 2021
** number
** File description:
** number
*/

#include <stdbool.h>

int my_strlen(char const *str);
int my_getnbr(char const *str);

bool is_digit(char c)
{
    return '0' <= c && c <= '9';
}

int number(char **str_ptr)
{
    int converted = my_getnbr(*str_ptr);

    if (**str_ptr == '-')
        (*str_ptr)++;
    while(is_digit(**str_ptr)) {
        (*str_ptr)++;
    }
    return converted;
}
