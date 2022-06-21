/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** check if the parameter is a prime number
*/

int check_prime_rec(int div, int nb)
{
    if (div != nb) {
        if (nb % div != 0) {
            check_prime_rec(div + 1, nb);
        } else {
            return 0;
        }
    }
    return 1;
}

int my_is_prime(int nb)
{
    if (nb < 2)
        return 0;
    return check_prime_rec(2, nb);
}
