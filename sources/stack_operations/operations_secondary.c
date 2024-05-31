#include "../../includes/push_swap.h"
#include <unistd.h> // for the write function

void	ra(t_node **stack_a, int flag)
{
	t_node	*first;
	t_node	*last;
	t_node	*new_head;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	first = *stack_a;
	new_head = first->next;
	last = lstlast(*stack_a);
	last->next = first;
	first->next = NULL;
	*stack_a = new_head;
	if (flag == 0)
		write(1, "ra\n", 3);
}
void	rb(t_node **stack_b, int flag)
{
	t_node	*first;
	t_node	*last;
	t_node	*new_head;

	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	first = *stack_b;
	new_head = first->next;
	last = lstlast(*stack_b);
	last->next = first;
	first->next = NULL;
	*stack_b = new_head;
	if (flag == 0)
		write(1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b, int flag)
{
	t_node	*first_a;
	t_node	*last_a;
	t_node	*new_head_a;
	t_node	*first_b;
	t_node	*last_b;
	t_node	*new_head_b;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	first_a = *stack_a;
	new_head_a = first_a->next;
	last_a = lstlast(*stack_a);
	last_a->next = first_a;
	first_a->next = NULL;
	*stack_a = new_head_a;
	first_b = *stack_b;
	new_head_b = first_b->next;
	last_b = lstlast(*stack_b);
	last_b->next = first_b;
	first_b->next = NULL;
	*stack_b = new_head_b;
	if (flag == 0)
		write(1, "rr\n", 3);
}
