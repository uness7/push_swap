#include "push_swap.h"

int	is_input_valid_helper(int ac, char **av)
{
	int		i;	
	int		a;

	i = 1;
	while (i < ac)
	{
		a = ft_atoi(av[i]);
		if (a < INT_MIN || a > INT_MAX)
			return (0);
		i++;
	}
	return (1);
}

void	print_error(void)
{
	write(1, "Error.\n", 7);
}
