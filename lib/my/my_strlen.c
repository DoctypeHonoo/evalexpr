/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** count string length
*/

int my_strlen(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return a;
}
