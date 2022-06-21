/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** copy the strstr function
*/

#include <stddef.h>

char *my_strstr(char *str, char const *to_find)
{
    int last = 0;
    int i = 0;

    while (to_find[last] != '\0') {
        last++;
    }
    if(to_find[0] == '\0') {
        return str;
    }
    if (str[0] == '\0') {

   }
    while (str[i] != to_find[i] && str[i] != '\0') {
        str += 1;
    }
    if (str[i] != '\0') {
        while (str[i] == to_find[i] && str[i] != '\0' && to_find[i] != '\0') {
            i += 1;
        }
        if (i == last) {
            return str;
        } else if (str[i] != '\0') {
            return my_strstr(str + 1, to_find);
        } else {
            return NULL;
        }
    } else {
        return NULL;
    }
}
