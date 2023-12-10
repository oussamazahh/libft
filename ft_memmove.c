/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahidi <ozahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:53:14 by ozahidi           #+#    #+#             */
/*   Updated: 2023/12/09 10:48:59 by ozahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dst_o;
	char		*src_o;

	dst_o = (char *)dst;
	src_o = (char *)src;
	if (len <= 0)
		return (dst_o);
	if (!dst_o && !src_o)
		return (NULL);
	if (dst < src)
		dst_o = ft_memcpy(dst, src, len);
	else
	{
		i = len -1;
		while (i >= 0)
		{
			dst_o[i] = src_o[i];
			if (i == 0)
				break ;
			i--;
		}
	}
	return (dst_o);
}
