#include "push_swap.h"

t_node	*create_node(int data)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
	{
		printf("Malloc Err inside create_node function\n");
		free(new);
		exit(EXIT_FAILURE);
	}
	new->data = data;
	new->next = NULL;
	return (new);
}

void	fill_arr(int *arr, int ac, char **av)
{
	int		i;
	int		j;

	j = 0;
	i = 1;
	while (i < ac)
	{
		arr[j++] = ft_atoi(av[i]);
		i++;
	}
}

void	display_stack(t_stack *stack)
{
	t_node	*current;

	current = stack->peak;
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}

void	fill_stack(t_stack *stack, int *arr, int size)
{
	t_node	*new;
	int		i;

	i = size - 1;
	while (i >= 0)
	{
		new = create_node(arr[i]);
		new->next = stack->peak;
		stack->peak = new;
		i--;
	}
}

void	free_stack(t_stack *stack)
{
	t_node	*temp;
	t_node	*next;

	if (stack == NULL)
		return ;
	temp = stack->peak;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
