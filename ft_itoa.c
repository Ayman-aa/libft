/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:52:09 by aaamam            #+#    #+#             */
/*   Updated: 2024/01/10 13:35:27 by aaamam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_length(long num)
{
	size_t	len;

	len = 1;
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num > 9)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	sign;
	long	num;
	size_t	len;
	char	*result;

	num = n;
	len = num_length(num);
	sign = 0;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (num < 0)
	{
		sign = 1;
		num = -num;
	}
	while (len-- > sign)
	{
		result[len] = (num % 10) + '0';
		num /= 10;
	}
	if (sign)
		result[0] = '-';
	return (result);
}
