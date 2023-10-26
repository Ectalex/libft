/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:12:51 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/18 15:31:19 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
			return (-1);
		if (((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
			return (1);
		i++;
	}
	return (0);
}
/*
int	main()
{
	printf("%d\n", ft_memcmp("t", "t", 0));
	printf("%d", memcmp("t", "t", 0));
}*/
