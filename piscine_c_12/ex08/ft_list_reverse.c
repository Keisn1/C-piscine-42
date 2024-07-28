/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 20:12/36 by kay               #+#    #+#             */
/*   Updated: 2024/07/28 20:12:36 by kay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>
/* #include <stdio.h> */
/* #include <stdlib.h> */
/* #include <unistd.h> */

void ft_list_reverse(t_list **begin_list) {
	if (*begin_list == NULL)
		return;
	if ((*begin_list)->next == NULL)
		return;

	t_list* head = *begin_list;
	*begin_list = head->next;
	ft_list_reverse(begin_list);
	head->next->next = head;
	head->next = NULL;
}

/* t_list	*ft_create_elem(void *data) */
/* { */
/* 	t_list	*node; */

/* 	node = (t_list *)malloc(sizeof(t_list)); */
/* 	if (!node) */
/* 	{ */
/* 		return (NULL); */
/* 	} */
/* 	node->data = data; */
/* 	node->next = NULL; */
/* 	return (node); */
/* } */

/* void	ft_list_push_front(t_list **begin_list, void *data) */
/* { */
/* 	t_list	*new_head; */

/* 	new_head = ft_create_elem(data); */
/* 	new_head->next = *begin_list; */
/* 	*begin_list = new_head; */
/* 	return ; */
/* } */


/* int main() { */
/* 	int i = 0; */
/* 	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; */
/* 	t_list* begin_list = ft_create_elem(arr+(i++)); */
/* 	while (i < 10) { */
/* 		ft_list_push_front(&begin_list, arr+i); */
/* 		i++; */
/* 	} */

/* 	i = 0; */
/* 	t_list* head = begin_list; */
/* 	while (i < 10) { */
/* 		printf("%d ", *(int*)head->data); */
/* 		head = head->next; */
/* 		i++; */
/* 	} */

/* 	printf("\n"); */
/* 	ft_list_reverse(&begin_list); */

/* 	i = 0; */
/* 	head = begin_list; */
/* 	while (i < 10) { */
/* 		printf("%d ", *(int*)head->data); */
/* 		head = head->next; */
/* 		i++; */
/* 	} */
/* 	printf("\n"); */

/*     return 0; */
/* } */
