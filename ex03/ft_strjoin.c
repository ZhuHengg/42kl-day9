/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhu-hen <czhu-hen@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:50:09 by czhu-hen          #+#    #+#             */
/*   Updated: 2022/06/09 17:50:11 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);
void	cpytostr(char **strs, char *fullstr, char *sep, int size);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*fullstr;
	int		totallenstrs;
	int		totallen;
	int		lenofsep;
	int		lines;

	if (size == 0)
	{
		fullstr = malloc(sizeof(char));
		*fullstr = 0;
		return (fullstr);
	}
	lines = -1;
	totallenstrs = 0;
	while (++lines < size)
		totallenstrs = totallenstrs + ft_strlen(strs[lines]);
	lenofsep = ft_strlen(sep);
	totallen = (lenofsep * (size - 1)) + totallenstrs + 1;
	fullstr = (char *) malloc (totallen * sizeof(char));
	cpytostr(strs, fullstr, sep, size);
	fullstr[totallen - 1] = '\0';
	return (fullstr);
}

void	cpytostr(char **strs, char *fullstr, char *sep, int size)
{
	int	i;
	int	j;
	int	lines;

	lines = -1;
	i = 0;
	while (++lines < size)
	{
		j = 0;
		while (strs[lines][j] != '\0')
			fullstr[i++] = strs[lines][j++];
		j = 0;
		if (lines != size - 1)
		{
			while (sep[j] != '\0')
				fullstr[i++] = sep[j++];
		}
	}
}
