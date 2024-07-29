/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:18/20 by kay               #+#    #+#             */
/*   Updated: 2024/07/29 10:18:20 by kay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	insert_sorted(t_list **begin_list, t_list *new, int (*cmp)(void *,
			void *))
{
	t_list	dummy;
	t_list	*head;

	head = &dummy;
	dummy.next = *begin_list;
	while (head->next)
	{
		if ((*cmp)(head->next->data, new->data) > 0)
			break ;
		head = head->next;
	}
	new->next = head->next;
	head->next = new;
	*begin_list = dummy.next;
}

/* with insertsort */
void	ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	t_list	*head;
	t_list	*new;
	t_list	*tmp;

	if (begin_list == NULL)
		return ;
	head = *begin_list;
	new = NULL;
	while (head)
	{
		tmp = head->next;
		insert_sorted(&new, head, cmp);
		head = tmp;
	}
	*begin_list = new;
	return ;
}

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
	{
		return (NULL);
	}
	node->data = data;
	node->next = NULL;
	return (node);
}

int	int_cmp(void *a, void *b)
{
	int	i;
	int	j;

	i = *(int *)a;
	j = *(int *)b;
	if (i < j)
		return (-1);
	if (i > j)
		return (1);
	return (0);
}

void	print_list(t_list *begin_list)
{
	while (begin_list)
	{
		printf("%d ", *(int *)begin_list->data);
		begin_list = begin_list->next;
	}
	printf("\n");
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	dummy;
	t_list	*head;

	head = &dummy;
	dummy.next = *begin_list;
	while (head->next)
		head = head->next;
	head->next = ft_create_elem(data);
	*begin_list = dummy.next;
}

int	main(int argc, char *argv[])
{
	int		*arr;
	int		i;
	t_list	*head;

	arr = (int *)malloc((argc - 1) * sizeof(int));
	i = 0;
	while (i < argc - 1)
	{
		arr[i] = atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		ft_list_push_back(&head, arr + i);
		i++;
	}
	ft_list_sort(&head, int_cmp);
	print_list(head);
	return (0);
}
