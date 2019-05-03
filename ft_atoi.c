/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loloria <loloria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 05:32:03 by loloria           #+#    #+#             */
/*   Updated: 2019/04/30 22:28:48 by loloria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 1;
	res = 0;
	if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		return (0);
	if (str[i] == '-')
		neg = -1;
		i++;
	else if (str[i] == '+')
		i++;
	while (str[i] <= 9 && str[i] >= 0)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * neg);
}
