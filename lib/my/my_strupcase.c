/*
** EPITECH PROJECT, 2021
** my_strupcase
** File description:
** put all the char of a string in uppercase
*/

#include <stdio.h>

char *my_strupcase(char *str)
{
    int i = 0;
    char temp;

    while (str[i] != '\0') {
       if (str[i] >= 'a' && str[i] <= 'z') {
            temp = str[i] - 32;
            str[i] = temp;
        }
        i++;
    }
    return str;
}
