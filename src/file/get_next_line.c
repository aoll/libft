/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/10 15:05:03 by aollivie          #+#    #+#             */
/*   Updated: 2017/01/22 14:43:29 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_mycpy(char **stat, char **line)
{
	size_t	i;
	size_t	l;
	char	*tp;

	tp = ft_strdup(*stat);
	i = 0;
	l = ft_strlen(tp);
	if (*stat[0] == '\n' || *stat[0] == '\0')
	{
		free(*line);
		*line = ft_strnew(0);
		free(*stat);
		*stat = ft_strsub((char *)tp, 1, l - 1);
		free(tp);
		tp = NULL;
		return (1);
	}
	while (tp[i] != '\n' && tp[i] != '\0')
		i++;
	if (tp[i] == '\n')
	{
		free(*stat);
		free(*line);
		*line = ft_strsub((char *)tp, 0, i);
		*stat = ft_strsub((char *)tp, i + 1, l - i - 1);
		free(tp);
		tp = NULL;
		return (1);
	}
	free(tp);
	tp = NULL;
	return (0);
}

int		get_next_line(int const fd, char **line)
{
	char		*buf;
	static char *stat;
	char *tmp;
	int			rd;

	*line = ft_strnew(0);
	buf = ft_strnew(BUFF_SIZE);
	if (fd < 0)
		return (-1);
	if (stat && (rd = ft_mycpy(&stat, line)) > 0)
	{
		free(buf);
		buf = NULL;
		return (1);
	}
	while ((rd = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[rd] = '\0';
		tmp = ft_strjoin((const char *)stat, (const char *)buf);
		free(stat);
		stat = NULL;
		stat = ft_strdup(tmp);
		free(tmp);
		tmp = NULL;
		if (ft_mycpy(&stat, line) > 0)
		{
			free(buf);
			buf = NULL;
			free(stat);
			stat = NULL;
			return (1);
		}
	}
	if (rd == 0)
	{
		free(*line);
		*line = NULL;
		free(buf);
		free(stat);
		return (0);
	}
	if (stat)
	{
		*line = ft_strdup(stat);
		free(stat);
		stat = NULL;
		free(buf);
		buf = NULL;
		return (1);
	}
	return (0);
}
