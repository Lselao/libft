/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:42:14 by lselao            #+#    #+#             */
/*   Updated: 2019/06/09 18:25:28 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dst1;
	char	*src2;
	size_t	i;

	i = 0;
	dst1 = (char *)dst;
	src2 = (char *)src;
	while (i < n)
	{
		dst1[i] = src2[i];
		if ((unsigned char)src2[i] == (unsigned char)c)
		{
			return ((char *)dst + i + 1);
			i++;
		}
	}
}
