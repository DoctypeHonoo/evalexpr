/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** reverse a string given as parameter
*/

char *my_revstr(char *str)
{
    int i = 0;
    int last = 0;
    char temp;

    while (str[last] != '\0') {
        last++;
    }
    last--;
    while (i < last) {
        temp = str[last];
        str[last] = str[i];
        str[i] = temp;
        i++;
        last--;
    }
    return str;
}
