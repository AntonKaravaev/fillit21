/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharmund <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 17:58:38 by bharmund          #+#    #+#             */
/*   Updated: 2018/12/09 18:23:24 by bharmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	if (65 <= c && c <= 90)
		return (1);
	if (97 <= c && c <= 122)
		return (1);
	return (0);
}
