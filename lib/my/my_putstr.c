/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** display one by one the chars of a string
*/

void my_putchar(char ch);

int my_putstr(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
    return 0;
}
