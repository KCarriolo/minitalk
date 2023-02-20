/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:59:13 by kefernan          #+#    #+#             */
/*   Updated: 2022/06/14 10:51:32 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*temp_s;

	temp_s = (char *) s;
	i = 0;
	while (temp_s[i] != (char) c && temp_s[i] != '\0')
		i++;
	if (temp_s[i] == (char) c)
		return (&temp_s[i]);
	return (0);
}
