/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 11:31:42 by jandre-d       #+#    #+#                */
/*   Updated: 2019/01/16 12:14:57 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*to_return;
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(s);
	to_return = malloc(len + 1);
	if (to_return != NULL)
	{
		i = 0;
		while (i < len)
		{
			to_return[i] = f(i, s[i]);
			i++;
		}
		to_return[len] = '\0';
	}
	return (to_return);
}
