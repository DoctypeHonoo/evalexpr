/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** return a number set as a string
*/

int check_sign(char const **str)
{
    int final_sign = 1;

    while (*str[0] == '-' || *str[0] == '+') {
        if (*str[0] == '-') {
            final_sign = final_sign * -1;
        }
        *str += 1;
    }
    return final_sign;
}

int max_or_min(int final_sign, int numbers, int num)
{
    long int max = 2147483647;
    long int min = -2147483648;

    if (final_sign == 1) {
        if (numbers > max / 10) {
            return 0;
        } else if (numbers == max / 10 && max % 10 < num) {
            return 0;
        } else {
            return 1;
        }
    } else if (final_sign == -1) {
        if (numbers > min / -10) {
            return 0;
        } else if (numbers == min / -10 && min % 10 * -1 < num) {
            return 0;
        } else {
            return 1;
        }
    }
    return 0;
}

int my_getnbr(char const *str)
{
    int numbers = 0;
    int i = 0;
    int sign = check_sign(&str);

    while (str[i] >= 48 && str[i] <= 57) {
        if (max_or_min(sign, numbers, str[i] - 48) == 0) {
            return 0;
        } else {
            numbers = numbers * 10 + str[i] - 48;
        }
        i++;
    }
    return numbers * sign;
}
