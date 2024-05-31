/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:56:19 by lisimony          #+#    #+#             */
/*   Updated: 2024/05/20 16:48:44 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp1;
	t_list	*temp2;

	temp1 = *lst;
	while (temp1)
	{
		temp2 = temp1->next;
		ft_lstdelone(temp1, del);
		temp1 = temp2;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

void delete_content(void *content) {
    free(content);
}

int main() {
    t_list *head = NULL;

    for (int i = 0; i < 3; i++) {
        t_list *new_node = malloc(sizeof(t_list));
        if (new_node == NULL) {
            ft_lstclear(&head, delete_content);
            return 1;
        }
        new_node->content = malloc(sizeof(int));
        if (new_node->content == NULL) {
            free(new_node);
            ft_lstclear(&head, delete_content);
            return 1;
        }
        *(int*)new_node->content = i;
        new_node->next = head;
        head = new_node;
    }

    ft_lstclear(&head, delete_content);

    return 0;
}
*/
