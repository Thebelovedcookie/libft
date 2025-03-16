/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:15:48 by mmahfoud          #+#    #+#             */
/*   Updated: 2023/11/10 10:23:44 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		size;

	size = ft_strlen((char *)s) + 1;
	ptr = (char *)malloc(size * sizeof(char));
	if (!(ptr))
		return (NULL);
	if (ptr)
	{
		ft_strlcpy(ptr, s, size);
	}
	return (ptr);
}
