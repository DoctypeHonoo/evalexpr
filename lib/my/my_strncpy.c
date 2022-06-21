/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** copy a determined number of characters of a string to another one
*/

int my_strlen(char const *str);

char *my_strncpy(char *desc, char const *src, int n)
{
    int i = 0;

    while (i != n) {
        if (i >= my_strlen(src)) {
            desc[i] = '\0';
        } else {
            desc[i] = src[i];
        }
        i++;
    }
    return desc;
}
