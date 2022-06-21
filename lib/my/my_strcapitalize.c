/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** Capitalize first letter of each words
*/

int alpha(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        return 1;
    } else if (ch >= '0' && ch <= '9') {
        return 1;
    } else {
        return 0;
    }
}

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (i != 0) {
                if (alpha(str[i-1]) == 0) {
                    str[i] -= 32;
                }
            } else {
                str[i] -= 32;
            }
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            if (i != 0) {
                if (alpha(str[i-1]) == 1) {
                    str[i] += 32;
                }
            }
        }
        i++;
    }
    return str;
}
