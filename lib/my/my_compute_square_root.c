/*
** EPITECH PROJECT, 2021
** my_compute_square_root
** File description:
** give sqrt of the parameter
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    while (i*i != nb) {
        if(i > nb / 2 || i > 46341)
            return 0;
        i++;
    }
    return i;
}
