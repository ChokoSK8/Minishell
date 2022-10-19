/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edjavid <edjavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:17:09 by abrun             #+#    #+#             */
/*   Updated: 2021/12/10 15:55:09 by edjavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		c;

	if (!s1)
		return (NULL);
	dst = malloc(ft_strlen(s1) + 1);
	if (!dst)
		return (0);
	c = 0;
	while (s1[c])
	{
		dst[c] = s1[c];
		c++;
	}
	dst[c] = 0;
	return (dst);
}
