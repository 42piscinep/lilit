#include "../../includes/push_swap.h"

void	sa(t_node **stack_a, int flag)
{
	t_node	*first;
	t_node	*second;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	first = *stack_a;
	second = (*stack_a)->next;
	first->next = second->next;
	second->next = first;
	*stack_a = second;
	if (flag == 0)
		write(1, "sa\n", 3);
}

void	sb(t_node **stack_b, int flag)
{
	t_node	*first;
	t_node	*second;

	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	first = *stack_b;
	second = (*stack_b)->next;
	first->next = second->next;
	second->next = first;
	*stack_b = second;
	if (flag == 0)
		write(1, "sb\n", 3);
}

void	ss(t_node **stack_a, t_node **stack_b, int flag)
{
	t_node	*first_a;
	t_node	*second_a;
	t_node	*first_b;
	t_node	*second_b;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	first_a = *stack_a;
	second_a = (*stack_a)->next;
	first_a->next = second_a->next;
	second_a->next = first_a;
	*stack_a = second_a;
	first_b = *stack_b;
	second_b = (*stack_b)->next;
	first_b->next = second_b->next;
	second_b->next = first_b;
	*stack_b = second_b;
	if (flag == 0)
		write(1, "ss\n", 3);
}

void	pa(t_node **stack_a, t_node **stack_b, int flag)
{
	t_node	*top_b;

	if (!stack_b || !(*stack_b))
		return ;
	top_b = *stack_b;
	*stack_b = (*stack_b)->next;
	top_b->next = *stack_a;
	*stack_a = top_b;
	if (flag == 0)
		write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b, int flag)
{
	t_node	*top_a;

	if (!stack_a || !(*stack_a))
		return ;
	top_a = *stack_a;
	*stack_a = (*stack_a)->next;
	top_a->next = *stack_b;
	*stack_b = top_a;
	if (flag == 0)
		write(1, "pb\n", 3);
}
