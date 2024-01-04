#include "push_swap.h"

void	pop(t_stack *stack)
{
	t_node	*temp;

	if (stack == NULL || stack->peak == NULL)
		return ;
	temp = stack->peak;
	stack->peak = stack->peak->next;
	free(temp);
}

int	is_stack_empty(t_stack *stack)
{
	if (stack == NULL)
		exit(EXIT_FAILURE);
	if (stack->peak == NULL)
		return (1);
	return (0);
}

int	is_stack_sorted(t_stack *stack)
{
	t_node	*temp;

	if (stack == NULL || stack->peak == NULL)
		return (1);
	temp = stack->peak;
	while (temp->next != NULL)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	has_array_dup(int *arr, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_input_valid(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		if (av[i][0] == '-' || av[i][0] == '+')
		{
			if (!av[i][1])
				return (0);
			j = 1;
		}
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
