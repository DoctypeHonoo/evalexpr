/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** mix 2 string given as parameter based on the integer n
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0' && j <= nb - 1) {
        dest[i] = src[j];
        i++;
        j++;
    }
    return dest;
}
