#include "../../includes/push_swap.h"

void	rra(t_node **stack_a, int flag)
{
	t_node	*temp;
	t_node	*prev;
	t_node	*last;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	temp = *stack_a;
	prev = NULL;
	while (temp->next)
	{
		prev = temp;
		temp = temp->next;
	}
	last = temp;
	if (prev)
	{
		prev->next = NULL;
		last->next = *stack_a;
		*stack_a = last;
	}
	if (flag == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_node **stack_b, int flag)
{
	t_node	*temp;
	t_node	*prev;
	t_node	*last;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	temp = *stack_b;
	prev = NULL;
	while (temp->next)
	{
		prev = temp;
		temp = temp->next;
	}
	last = temp;
	if (prev)
	{
		prev->next = NULL;
		last->next = *stack_b;
		*stack_b = last;
	}
	if (flag == 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_node **stack_a, t_node **stack_b, int flag)
{
	t_node	*temp;
	int		count;

	if (!*stack_a || !((*stack_a)->next) || !*stack_b || !((*stack_b)->next))
		return ;
	count = 0;
	temp = *stack_a;
	while ((*stack_a)->next)
	{
		count++;
		*stack_a = (*stack_a)->next;
	}
	(*stack_a)->next = temp;
	while (count > 1)
	{
		temp = temp->next;
		count--;
	}
	temp->next = NULL;
	rrr_part2(stack_b, flag);
}

void	rrr_part2(t_node **stack_b, int flag)
{
	t_node *temp;
	int count;

	count = 0;
	temp = *stack_b;
	while ((*stack_b)->next)
	{
		count++;
		*stack_b = (*stack_b)->next;
	}
	(*stack_b)->next = temp;
	while (count > 1)
	{
		temp = temp->next;
		count--;
	}
	temp->next = NULL;
	if (flag == 0)
		write(1, "rrr\n", 4);
}