/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:26:09 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/22 11:05:21 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	n;
	char	*dest;

	n = ft_strlen(s);
	dest = malloc(n + 1);
	if (dest == NULL)
		return (NULL);
	if (dest)
	{
		dest[n] = 0;
		while (n > 0)
		{
			n--;
			dest[n] = (*f)(n, s[n]);
		}
	}
	return (dest);
}
/*
char	f(unsigned int n, char s)
{
	return (s + 32);
}

int main()
{
	char	*s = "COUCOU CA VA ?";
	char	*dest;

	dest = ft_strmapi(s, f);
	printf ("%s", dest);
}*/
