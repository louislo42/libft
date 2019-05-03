/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loloria <loloria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:31:46 by loloria           #+#    #+#             */
/*   Updated: 2019/05/03 19:50:40 by loloria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char *dest;
	const char *src;

	dest = str1;
	src = str2;
	while (n--)
	{
		*dest++ = *src++;
	}
	return (str1);
}
