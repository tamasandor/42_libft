/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:30:26 by atamas            #+#    #+#             */
/*   Updated: 2023/11/16 18:21:09 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	*substring;
	char	*start_of_substring;
	char	*string;
	int		i;

	i = start;
	substring = (char *)malloc(sizeof(char) * (len - start) + 1);
	if (!substring)
		return (NULL);
	start_of_substring = substring;
	string = ((char *)s + start);
	while (*string != '\0' && i < len)
	{
		*substring++ = *string++;
		i++;
	}
	*substring = '\0';
	return (start_of_substring);
}
