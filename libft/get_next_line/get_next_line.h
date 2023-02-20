/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:54:55 by kefernan          #+#    #+#             */
/*   Updated: 2022/08/09 11:32:45 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# define BUFFER_SIZE 4

char	*get_next_line(int fd);

char	*ft_gnl_strchr(const char *s, int c);

char	*ft_gnl_strjoin(char *s1, char *s2);

size_t	ft_gnl_strlen(char *s);

void	*ft_gnl_calloc(size_t count, size_t size);

char	*ft_gnl_strdup(const char *s);

size_t	ft_find_newline(char *s);

char	*ft_ret(char *s);

char	*ft_buffer_renew(char *s);

char	*ft_checks(int check, int fd, char *s);

#endif
