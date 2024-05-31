
#include "../../includes/push_swap.h"

t_node	*lstlast(t_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	ft_lstsize(t_node *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	smallest_nbr(t_node *stack_a)
{
	int	i;

	i = stack_a->number;
	while (stack_a)
	{
		if (stack_a->number < i)
			i = stack_a->number;
		stack_a = stack_a->next;
	}
	return (i);
}

int	biggest_nbr(t_node *stack_a)
{
	int	i;

	i = stack_a->number;
	while (stack_a)
	{
		if (stack_a->number > i)
			i = stack_a->number;
		stack_a = stack_a->next;
	}
	return (i);
}
