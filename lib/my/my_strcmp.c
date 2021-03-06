/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** reproduce behaviour of strcmp function
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++;
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
