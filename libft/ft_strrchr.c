/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:44:46 by kefernan          #+#    #+#             */
/*   Updated: 2022/06/14 10:53:07 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *) s;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (str[i] != (char) c && i > 0)
	{
		i--;
	}
	if (str[i] == (char) c)
		return (&str[i]);
	return (0);
}
