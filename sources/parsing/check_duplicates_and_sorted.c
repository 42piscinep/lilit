#include "../../includes/push_swap.h"

int	check_duplicates(t_node *stack_a)
{
	t_node	*current;
	t_node	*check;

	current = stack_a;
	while (current)
	{
		check = current->next;
		while (check)
		{
			if (current->number == check->number)
				return (1);
			check = check->next;
		}
		current = current->next;
	}
	return (0);
}

int	check_sorted(t_node *stack_a)
{
	t_node	*current;

	current = stack_a;
	while (current && current->next)
	{
		if (current->number > current->next->number)
			return (0);
		current = current->next;
	}
	return (1);
}

void	free_str(char **array)
{
	char	*n1;

	if (!array)
		return ;
	while (*array)
	{
		n1 = *array;
		array++;
		free(n1);
	}
	*array = NULL;
}
