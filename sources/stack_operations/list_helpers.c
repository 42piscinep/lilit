
#include "../../includes/push_swap.h"

int	check_nbr_index(t_node *stack_a, int number)
{
	int	idx;

	idx = 0;
	while (stack_a->number != number)
	{
		idx++;
		stack_a = stack_a->next;
	}
	stack_a->index = 0;
	return (idx);
}

int	find_insert_position_b(t_node *stack_b, int number_push)
{
	int		idx;
	t_node	*tmp;

	idx = 1;
	if (number_push > stack_b->number && number_push < lstlast(stack_b)->number)
		idx = 0;
	else if (number_push > biggest_nbr(stack_b)
		|| number_push < smallest_nbr(stack_b))
		idx = check_nbr_index(stack_b, biggest_nbr(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->number < number_push || tmp->number > number_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			idx++;
		}
	}
	return (idx);
}

int	find_insert_position_a(t_node *stack_a, int number_push)
{
	int		idx;
	t_node	*tmp;

	idx = 1;
	if (number_push < stack_a->number && number_push > lstlast(stack_a)->number)
		idx = 0;
	else if (number_push > biggest_nbr(stack_a)
		|| number_push < smallest_nbr(stack_a))
		idx = check_nbr_index(stack_a, smallest_nbr(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->number > number_push || tmp->number < number_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			idx++;
		}
	}
	return (idx);
}
