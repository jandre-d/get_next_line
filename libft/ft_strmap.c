/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 11:25:02 by jandre-d       #+#    #+#                */
/*   Updated: 2019/01/16 12:15:10 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*to_return;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	to_return = malloc(len + 1);
	if (to_return != NULL)
	{
		i = 0;
		while (i < len)
		{
			to_return[i] = f(s[i]);
			i++;
		}
		to_return[len] = '\0';
	}
	return (to_return);
}
