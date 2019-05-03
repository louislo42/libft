/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loloria <loloria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:38:52 by loloria           #+#    #+#             */
/*   Updated: 2019/04/30 22:43:47 by loloria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int 	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}