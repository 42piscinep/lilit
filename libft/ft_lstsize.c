/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:14:32 by lisimony          #+#    #+#             */
/*   Updated: 2024/05/20 16:46:32 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
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
/*
#include <stdio.h>

int main() {
    t_list *head = NULL;
    int val = 1;

    while (val <= 3) {
        t_list *new_node = malloc(sizeof(t_list));
        if (new_node == NULL)
            return 1;
        new_node->content = malloc(sizeof(int));
        if (new_node->content == NULL)
            return 1;
        *(int*)new_node->content = val;
        new_node->next = head;
        head = new_node;
        val++;
    }

    int size = ft_lstsize(head);
    printf("The list contains %d nodes.\n", size);

    t_list *current = head;
    while (current != NULL) {
        t_list *next = current->next;
        free(current->content);
        free(current);
        current = next;
    }

    return 0;
}
*/
