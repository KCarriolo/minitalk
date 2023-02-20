/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:49:44 by kefernan          #+#    #+#             */
/*   Updated: 2022/06/02 11:38:37 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*t_haystack;
	char	*t_needle;
	size_t	i;
	size_t	k;

	t_haystack = (char *) haystack;
	t_needle = (char *) needle;
	i = 0;
	if (*t_needle == '\0')
		return (t_haystack);
	while (i < len && t_haystack[i])
	{	
		k = 0;
		while (t_haystack[i + k] == t_needle[k] && (i + k) < len)
		{
			if (t_needle[k + 1] == '\0')
				return (&t_haystack[i]);
			k++;
		}
		i++;
	}
	return (NULL);
}
