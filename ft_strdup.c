/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:23:18 by atamas            #+#    #+#             */
/*   Updated: 2023/11/16 15:37:22 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*memory;
	char	*start;
	int		len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	memory = malloc(sizeof(*src) * (len + 1));
	if (!memory)
		return (NULL);
	start = memory;
	while (*src)
	{
		*memory = *src;
		memory++;
		src++;
	}
	*memory = '\0';
	return (start);
}
