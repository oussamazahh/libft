/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahidi <ozahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:49:35 by ozahidi           #+#    #+#             */
/*   Updated: 2023/12/10 17:50:45 by ozahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			strlen_needle;

	i = 0;
	strlen_needle = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if(ft_strncmp(haystack + i,needle,ft_strlen(needle)) == 0
			&& len - i > ft_strlen(needle) && haystack[i] == needle[0])
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
