/*
** EPITECH PROJECT, 2021
** my_str_isprintable
** File description:
** return 1 if character is printable, 0 otherwise
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] <= 126) {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
