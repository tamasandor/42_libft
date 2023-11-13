/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:55:11 by atamas            #+#    #+#             */
/*   Updated: 2023/11/13 20:06:11 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	if (c == '\0')
		return ((char *)string + i);
	while (i > 0)
	{
		if (string[i] == (char) c)
		{
			return ((char *)string + i);
		}
		i--;
	}
	return (0);
}
