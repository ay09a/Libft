/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:09:33 by ahussein          #+#    #+#             */
/*   Updated: 2022/07/19 16:00:41 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	if (n == 0)
		return (NULL);
	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*m;

// 	m = ft_memchr("hello", 'l', 5);
// 	printf("%s", m);
// }
