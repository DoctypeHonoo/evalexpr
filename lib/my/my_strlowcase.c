/*
** EPITECH PROJECT, 2021
** my_strlowcase
** File description:
** put every char in lower case
*/

char *my_strlowcase(char *str)
{
    int i = 0;
    char temp;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            temp = str[i] + 32;
            str[i] = temp;
        }
        i++;
    }
    return str;
}
