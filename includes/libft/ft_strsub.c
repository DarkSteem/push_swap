/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberen <nberen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:28:36 by doberyn           #+#    #+#             */
/*   Updated: 2022/03/24 14:24:25 by nberen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	end;

	str = (char *)malloc(sizeof(*s) * (len) + 1);
	i = 0;
	if (!s || ((start + 1) == 0) || (len + 1) == 0)
		return (NULL);
	if (!(str))
		return (NULL);
	end = start + len;
	while (start < end)
		str[i++] = s[start++];
	str[i] = '\0';
	return ((char *)str);
}
