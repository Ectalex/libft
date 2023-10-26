/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:33:53 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/25 17:01:26 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int		main(void)
{
	char	str[] = "test";

	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*ret;

	lst1 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));
	lst3 = malloc(sizeof(t_list));

	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = NULL;

	lst3->content = (void *)str;
	ret = ft_lstlast(lst1);
	printf("%s", (char *)ret->content);
}*/
