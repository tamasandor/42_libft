/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:16:29 by atamas            #+#    #+#             */
/*   Updated: 2023/11/17 17:10:01 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_strlen(const char *string);
int		ft_strncmp(char *s1, char *s2, int until);
int		ft_strlcpy(char *dst, const char *src, int dstsize);

void	ft_bzero(void *s, int n);
void	*ft_calloc(int count, int size);

char	*ft_strchr(const char *string, int c);

#endif