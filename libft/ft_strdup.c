/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 11:37:46 by jandre-d       #+#    #+#                */
/*   Updated: 2019/01/12 10:22:21 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*to_return;
	size_t	len;

	len = ft_strlen(s1);
	if ((to_return = ft_strnew(len)) == NULL)
	{
		return (NULL);
	}
	ft_memcpy(to_return, s1, len);
	return (to_return);
}
