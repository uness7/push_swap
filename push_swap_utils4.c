#include "push_swap.h"

int     ft_atoi(char *s)
{
    int     i;
    int     sign;
    int     result;
    int     digit;

    i = 0;
    sign = 1;
    result = 0;
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }
    while (s[i])
    {
        digit = s[i] - '0';
        if ((sign == 1 && (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))) 
        || (sign == -1 && (result > -(INT_MIN / 10) || (result == -(INT_MIN / 10) && digit > -(INT_MIN % 10)))))
        {
            printf("Error.\n");
            exit(EXIT_FAILURE);
        }
        result = result * 10 + digit;
        i++;
    }
    return (result * sign);
}

int     ft_isdigit(char c)
{
    if (c < '0' || c > '9')
        return (0);
    return (1);
}
