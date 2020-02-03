/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 19:09:31 by jandre-d       #+#    #+#                */
/*   Updated: 2019/01/15 17:19:20 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next;
	t_list *prev;

	next = *alst;
	while (next != NULL)
	{
		prev = next;
		next = prev->next;
		ft_lstdelone(&prev, del);
	}
	*alst = NULL;
}
