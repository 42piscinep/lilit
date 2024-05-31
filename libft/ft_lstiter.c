/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:03:12 by lisimony          #+#    #+#             */
/*   Updated: 2024/05/20 16:48:03 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(f)(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void print_content(void *content) {
    printf("%d\n", *(int *)content);
}

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
        new_node->next = head;
        head = new_node;
    }

    ft_lstiter(head, print_content);


    while (head != NULL) {
        t_list *next = head->next;
        free(head->content);
        free(head);
        head = next;
    }

    return 0;
}
*/
