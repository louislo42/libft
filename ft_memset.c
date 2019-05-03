/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loloria <loloria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 03:02:32 by loloria           #+#    #+#             */
/*   Updated: 2019/04/26 23:31:31 by loloria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

void 	*ft_memset(void *str, int c, size_t n)
{
	size_t i;
	unsigned char *b;

	i = 0;
	b = str;
	while (i < n)
	{
		b[i] = (unsigned char)c;
		i++;
	}
	return (str);
}


int main()
{
   //initializing character array
   char str[30] = "Learn C from trytoprogram.com";

   //displaying str
   printf("str = %s\n\n", str);

   printf("str after memset( str, '*', 8 ) : %s\n", ft_memset(str, '*', 8));

   return 0;
}
