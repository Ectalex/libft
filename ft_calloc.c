/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:22:46 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/19 17:36:18 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t n)
{
	size_t	i;
	char	*a;

	i = nmemb * n;
	a = malloc(i);
	if (a == NULL)
		return (NULL);
	ft_bzero((char *)a, i);
	return (a);
}
/*
int	main()
{
	printf("%s", (char *)ft_calloc(10, 10));
}*/
