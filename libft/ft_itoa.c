/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 16:09:48 by jandre-d       #+#    #+#                */
/*   Updated: 2019/01/16 13:03:36 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int i;

	i = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*to_return;

	i = 0;
	len = ft_intlen(n);
	if ((to_return = ft_memalloc(len + 1)) == NULL)
		return (NULL);
	len -= 1;
	if (n < 0)
	{
		to_return[i++] = '-';
		if (n == -2147483648)
			return (ft_strcpy(to_return, "-2147483648"));
		else
			n *= -1;
	}
	while (n >= 10)
	{
		to_return[len--] = n % 10 + '0';
		n /= 10;
	}
	to_return[len] = n + '0';
	return (to_return);
}
