# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct s_node
{
    int data;
    int index;
    struct s_node   *next;
}           t_node;

typedef struct s_stack
{
    t_node  *peak;
}		t_stack;

/* A set of variables that will be used in my sort algorithm */
typedef struct s_obj
{
    int max;
    int a;
    int b;
    int y;
    int n;
}           t_obj;

/* Operations */
// Files : operations1, operations2, operations3
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *a, t_stack *b);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *a, t_stack *b);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

/* Functions used in sorting algorithm */
// File : sortThreeFive.c
void    sortThreeNodes(t_stack *a);
void    sortFiveNodes(t_stack *a, t_stack *b);

// File : sort100Nodes done
void    sort100Nodes(t_stack *a, t_stack *b, int ac, t_obj obj);

// File : sort500Nodes
void    sort500Nodes(t_stack *a, t_stack *b, int ac, t_obj obj);

// File : sortHelper.c done
void    sortHelper(t_stack *a, t_stack *b, int min, int max);

// File : push_swap.c
void    sort(t_stack *a, t_stack *b, int ac, t_obj obj);

// File : init.c
void    initObj(t_obj *obj, t_stack *a, int ac);
void	initStack(t_stack *a);

// Files : utils.c
void	fillStack(t_stack *a, int arr[], int size);
void	fillArr(int arr[], int ac, char **av);
void	displayStack(t_stack *a);
void	freeStack(t_stack *a);
void    indexStack(t_stack *a, int ac);
void    printError(void);
void	pop(t_stack *a);
void	ft_norm(t_stack *a, t_stack *b, int *n);

t_node	*createNode(int data);
t_node  *lastNode(t_stack *a);

int	*sortArray(t_stack *a, int ac);
int	hasArrayDup(int arr[], int size);
int     isStackSorted(t_stack *a);
int	isInputValid(int ac, char **av);
int	stackSize(t_stack *a);
int	isStackEmpty(t_stack *stack);
int	ft_atoi(char *str);
int	ft_isdigit(char c);


# endif
