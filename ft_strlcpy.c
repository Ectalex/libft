/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:07:14 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/19 16:02:56 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (src[k])
		k++;
	if (n > 0)
	{
		while ((src[i]) && (i < n - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (k);
}
/*
int	main()
{
	printf("%ld", ft_strlcpy("", "coucou", 6));
}*/
