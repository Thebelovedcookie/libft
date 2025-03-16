/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:06:14 by mmahfoud          #+#    #+#             */
/*   Updated: 2023/11/16 09:58:22 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_s;

	if (!(s))
		return (NULL);
	new_s = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (!s || !f || !new_s)
		return (NULL);
	i = 0;
	while (s[i])
	{	
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
