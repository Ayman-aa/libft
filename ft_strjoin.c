/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:38:02 by aaamam            #+#    #+#             */
/*   Updated: 2023/11/06 10:17:13 by aaamam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlen1(const char *s)
{
	int	i;

	i = 0;
	if(!s)
		return 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	strlen;
	size_t	lens1;
	size_t	lens2;
	size_t	i;

	i = 0;
	lens1 = ft_strlen1(s1);
	lens2 = ft_strlen1(s2);
	strlen = lens1 + lens2;
	str = (char *)malloc((strlen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < strlen)
	{
		if (i < lens1)
			str[i] = s1[i];
		else
			str[i] = s2[i - lens1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
