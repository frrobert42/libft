/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:08:17 by frrobert          #+#    #+#             */
/*   Updated: 2018/11/09 14:56:53 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				index;
	unsigned int	length_dest;
	unsigned int	length_src;

	index = 0;
	length_dest = ft_strlen(dest);
	length_src = ft_strlen(src);
	if (!size)
		return (0);
	if (size - 1 < length_dest)
		return (length_src + size);
	while (length_dest + index < size - 1)
	{
		dest[length_dest + index] = src[index];
		index++;
	}
	dest[length_dest + index] = '\0';
	return (length_dest + length_src);
}
