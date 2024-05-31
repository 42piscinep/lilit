
#include "../../includes/push_swap.h"

t_node	*ft_stack_new(int content)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		print_error();
	new->number = content;
	new->next = NULL;
	return (new);
}

void	ft_add_back(t_node **stack, t_node *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(lstlast(*stack))->next = stack_new;
}

void	free_stack(t_node **lst)
{
	t_node *temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		(*lst)->number = 0;
		free(*lst);
		*lst = temp;
	}
}