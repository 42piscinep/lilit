/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:21:27 by lisimony          #+#    #+#             */
/*   Updated: 2024/05/20 17:21:28 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>

int main() {
    t_list *head = NULL;

    int values[] = {10, 20, 30};
    for (int i = 0; i < 3; i++) {
        t_list *new_node = malloc(sizeof(t_list));
        if (new_node == NULL)
            return 1;
        new_node->content = malloc(sizeof(int));
        if (new_node->content == NULL)
            return 1;
        *(int*)new_node->content = values[i];
        new_node->next = head;
        head = new_node;
    }

    t_list *last = ft_lstlast(head);
    if (last != NULL)
        printf("The last node's content: %d\n", *(int*)last->content);

    while (head != NULL) {
        t_list *next = head->next;
        free(head->content);
        free(head);
        head = next;
    }

    return 0;
}
*/
