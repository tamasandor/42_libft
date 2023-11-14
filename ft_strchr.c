/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:30:31 by atamas            #+#    #+#             */
/*   Updated: 2023/11/14 12:26:30 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int c)
{
	while (*string != '\0')
	{
		if (*string == c)
		{
			return ((char *)string);
		}
		string++;
	}
	if (*string == '\0' && c == '\0')
		return ((char *)string);
	return (0);
}
