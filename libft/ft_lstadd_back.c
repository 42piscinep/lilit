/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:26:34 by lisimony          #+#    #+#             */
/*   Updated: 2024/05/20 16:44:11 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst)
	{
		temp = ft_lstlast(*(lst));
		temp->next = new;
	}
	else
		*lst = new;
}
/*
#include <stdio.h>

int main() {
    t_list *head = NULL;

    for (int i = 1; i <= 3; i++) {
        t_list *new_node = malloc(sizeof(t_list));
        if (new_node == NULL) {
            while (head) {
                t_list *temp = head;
                head = head->next;
                free(temp->content);
                free(temp);
            }
            return 1;
        }
        new_node->content = malloc(sizeof(int));
        if (new_node->content == NULL) {
            free(new_node);
            while (head) {
                t_list *temp = head;
                head = head->next;
                free(temp->content);
                free(temp);
            }
            return 1;
        }
        *(int*)new_node->content = i * 10;
        new_node->next = NULL;
        ft_lstadd_back(&head, new_node);
    }

    t_list *current = head;
    while (current != NULL) {
        printf("%d -> ", *(int*)current->content);
        current = current->next;
    }
    printf("NULL\n");

    while (head != NULL) {
        t_list *next = head->next;
        free(head->content);
        free(head);
        head = next;
    }

    return 0;
}
*/
