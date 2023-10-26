/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:06:58 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/22 15:19:06 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char const c, char const *set)
{
	int	cur;

	cur = -1;
	while (set[++cur])
		if (set[cur] == c)
			return (1);
	return (0);
}

char	*empty_string(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, "", 1);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	n;
	char	*dest;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (is_in_set(s1[start], set))
		start++;
	n = ft_strlen(s1);
	end = n - 1;
	if (start == n)
		return (empty_string());
	while (is_in_set(s1[end], set))
		end--;
	dest = malloc((end - start + 2) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, (s1 + start), (end - start + 2));
	return (dest);
}
/*
int     main()
{
        char    *dest;

        dest = ft_strtrim("ccou ca cyc", "c");
        printf("%s", dest);
}*/
