/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:03:50 by frrobert          #+#    #+#             */
/*   Updated: 2018/11/11 15:06:19 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*desttemp;
	char	*srctemp;

	if (n == 0)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	if (dest > src)
	{
		desttemp = (char *)dest;
		srctemp = (char *)src;
		while (n--)
			desttemp[n] = srctemp[n];
		return (dest);
	}
	return (dest);
}
