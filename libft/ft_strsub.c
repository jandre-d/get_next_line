/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsub.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 12:30:25 by jandre-d       #+#    #+#                */
/*   Updated: 2019/01/16 12:12:20 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*to_return;

	i = 0;
	if ((to_return = malloc((len + 1) * sizeof(char))) == NULL)
		return (NULL);
	to_return[len] = '\0';
	while (i < len)
	{
		to_return[i] = s[start + i];
		i++;
	}
	return (to_return);
}
