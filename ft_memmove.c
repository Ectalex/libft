/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:33:27 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/18 17:55:15 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if ((char *)a == NULL && (char *)b == NULL)
		return (0);
	if (a > b)
	{
		while (i < n--)
			a[n] = b[n];
	}
	else
	{
		while (i < n)
		{
			a[i] = b[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main()
{
	char	dest[] = "      ";
	char	src[] = "coucou";

	ft_memmove(dest, src, 6);
	printf("%s", dest);
}*/
