/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** swap content of 2 integers with their address.
*/

void my_putchar(char ch);

void my_swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
