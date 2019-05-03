/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loloria <loloria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:55:52 by loloria           #+#    #+#             */
/*   Updated: 2019/05/03 19:26:33 by loloria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int 	ft_toupper(int c)
{
	return (ft_isalpha(c) || ft_islower(c));
}
