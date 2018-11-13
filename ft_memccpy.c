/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:57:22 by frrobert          #+#    #+#             */
/*   Updated: 2018/11/12 14:05:16 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n)
	{
		*(unsigned char *)dest++ = *(unsigned char *)src;
		if (*(unsigned char *)src++ == (unsigned char)c)
			return ((unsigned char *)dest);
		n--;
	}
	return (NULL);
}
