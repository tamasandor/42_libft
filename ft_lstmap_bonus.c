/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:57:39 by atamas            #+#    #+#             */
/*   Updated: 2023/12/01 20:18:28 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newone;

	ft_lstiter(lst, f);
	newone = ft_lstnew(lst->content);
	while (lst)
	{
		if (!newone)
		{
			ft_lstclear(&newone, del);
			return (NULL);
		}
		ft_lstadd_back(&newone, lst);
	}
	lst = NULL;
	return (newone);
}
