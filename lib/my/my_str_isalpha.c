/*
** EPITECH PROJECT, 2021
** my_str_isalpha
** File description:
** return 1 if only alpha char in string and 0 otherwise
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            i++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
