/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:26:23 by frrobert          #+#    #+#             */
/*   Updated: 2018/11/10 10:48:01 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char	*s1temp;
	char	*s2temp;

	if ((s1 == NULL && s2) || (s1 && s2 == NULL))
		return (0);
	if (s1 == s2 && s2 == NULL)
		return (1);
	s1temp = (char *)s1;
	s2temp = (char *)s2;
	while (*s1temp++ && *s2temp++)
		if (*s1temp != *s2temp)
			return (0);
	return (1);
}
