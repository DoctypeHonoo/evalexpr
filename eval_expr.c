/*
** EPITECH PROJECT, 2021
** delivery
** File description:
** evalexpr
*/

#include <stdio.h>
int number(char **str_ptr);
int parse_term(char **str_ptr);
int my_put_nbr(int nb);
void my_putchar(char ch);
int parse_expression(char **str_ptr);
int parse_negative_parenthese(char **str_ptr);

int parse_factor(char **str_ptr)
{
    int res = 0;

    if (**str_ptr == '(') {
        *str_ptr += 1;
        res = parse_expression(str_ptr);
        *str_ptr += 1;
    } else if (**str_ptr == '-' && str_ptr[0][1] == '(') {
        *str_ptr += 2;
        res = parse_expression(str_ptr) * -1;
        *str_ptr += 1;
    } else {
        return number(str_ptr);
    }
    return res;
}

int parse_expression(char **str_ptr)
{
    int res = parse_term(str_ptr);

    while (1) {
        if (**str_ptr == '+') {
            *str_ptr += 1;
            res += parse_term(str_ptr);
        } else if (**str_ptr == '-') {
            *str_ptr += 1;
            res -= parse_term(str_ptr);
        } else {
            break;
        }
    }
    return res;
}

int parse_term(char **str_ptr)
{
    int res = parse_factor(str_ptr);

    while (1) {
        if (**str_ptr == '/') {
            *str_ptr += 1;
            res /= parse_factor(str_ptr);
        } else if (**str_ptr == '*') {
            *str_ptr += 1;
            res *= parse_factor(str_ptr);
        } else if (**str_ptr == '%') {
            *str_ptr += 1;
            res %= parse_factor(str_ptr);
        } else {
            break;
        }
    }
    return res;
}

int eval_expr(char const *str)
{
    return parse_expression((char **)&str);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}
