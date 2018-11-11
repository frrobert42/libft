/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:53:53 by frrobert          #+#    #+#             */
/*   Updated: 2018/11/09 12:08:45 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	unsigned long i;
	unsigned long s;
	unsigned long nb;

	i = 0;
	nb = 0;
	s = 1;
	while ((str[i] == ' ') || (str[i] <= 13))
		i++;
	if ((str[i] == '+') || (str[i] == '-') || (str[i] == ' '))
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * s);
}
