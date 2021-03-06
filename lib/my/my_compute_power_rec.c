/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** power systeme in rec
*/

int my_compute_power_rec(int nb, int p)
{
    long int res = nb;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    if (res < -2147483648 || res > 2147483647)
        return 0;
    return res * my_compute_power_rec(nb, p-1);
}
