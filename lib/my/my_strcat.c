/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** mix 2 content of char variable, one string and one malloc
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    return dest;
}
