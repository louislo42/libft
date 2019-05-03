/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loloria <loloria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:54:56 by loloria           #+#    #+#             */
/*   Updated: 2019/05/03 20:01:49 by loloria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void 	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *str1;
	const char *str2;
	unsigned char *c;

	str1 = dest;
	str2 = src;
	while (n--)
	{
		*c = *str2;
		*str2 = *str1;
		*str1 = *c;
	}
	return (dest);
}
