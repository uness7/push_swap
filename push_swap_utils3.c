#include "push_swap.h"

t_node  *lastNode(t_stack *a)
{
    t_node  *temp;

    temp = a->peak;
    while (temp->next)
        temp = temp->next;
    return (temp);
}

void    indexStack(t_stack *a, int ac)
{
    t_node *temp;
    int     *arr;
    int     i;

    temp = a->peak;
    arr = sortArray(a, ac);
    while (temp)
    {
        i = 0;
        while (i < ac)
        {
            if (temp->data == arr[i])
            {
                temp->index = i;
                break ;
            }
            i++;
        }
        temp = temp->next;
    }
    free(arr);
    arr = NULL;
}

static void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int *sortArray(t_stack *a, int ac)
{
    t_node  *temp;
    int     *arr;
    int     i;
    int     j;

    temp = a->peak;
    arr = malloc(sizeof(int) * ac);
    if (!arr)
        return (NULL);
    i = 0;
    while (temp)
    {
        arr[i++] = temp->data;
        temp = temp->next;
    }
    j = -1;
    while (++j < ac)
    {
        i = 0;
        while (++i < ac)
            if (arr[i] < arr[i - 1])
                ft_swap(&arr[i], &arr[i - 1]);
    }
    return (arr);
}

int stackSize(t_stack *stack)
{
    t_node  *temp;
    int     count;

    count = 0;
    temp = stack->peak;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return (count);
}
