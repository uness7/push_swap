#include "push_swap.h"

static void	check_overflow(int digit, int sign, int result)
{
	if (sign == 1)
	{
		if (result > INT_MAX / 10 || \
			(result == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			print_error();
			exit(EXIT_FAILURE);
		}
	}
	else if (sign == -1)
	{
		if (result > -(INT_MIN / 10) || \
			(result == -(INT_MIN / 10) && digit > -(INT_MIN % 10)))
		{
			print_error();
			exit(EXIT_FAILURE);
		}
	}
}

int	ft_atoi(char *s)
{
	int		i;
	int		sign;
	int		result;
	int		digit;

	i = 0;
	result = 0;
	sign = 1;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i])
	{
		digit = s[i] - '0';
		check_overflow(digit, sign, result);
		result = result * 10 + digit;
		i++;
	}
	return (result * sign);
}

int	ft_isdigit(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
