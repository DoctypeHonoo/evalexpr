/*
** EPITECH PROJECT, 2021
** my_str_isnum
** File description:
** return 1 if only digits and 0 otherwise
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
