/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** putting character with write
*/

#include <unistd.h>

void my_putchar(char ch)
{
    write(1, &ch, 1);
}
