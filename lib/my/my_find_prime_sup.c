/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** find the next prime number after the number gave as parameter
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int res = my_is_prime(nb);

    if (res == 0)
        return my_find_prime_sup(nb+1);
    return nb;
}
