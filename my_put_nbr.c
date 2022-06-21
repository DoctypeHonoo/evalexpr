/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** display every integer given as parameter.
*/

void my_putchar(char ch);

int check_null(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        check_null(nb / -10);
        my_putchar((nb % 10) * -1 + '0');
    }
    if (nb > 0) {
        check_null(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    return 0;
}

int my_put_nbr(int nb)
{
    if (nb == 0) {
        my_putchar('0');
        return 0;
    }
    check_null(nb);
    return 0;
}
