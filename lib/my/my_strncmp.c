/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** reproduce behavior of strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++;
        if (i > n -1)
            return 0;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
        return 0;
    if (s1[i] == '\0')
        return -1;
    if (s2[i] == '\0')
        return 1;
    if (s1[i] > s2[i]) {
        return 1;
    } else {
        return -1;
    }
}
