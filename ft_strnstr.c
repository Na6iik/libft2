/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:32:03 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 19:12:19 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
     The strnstr() function locates the first occurrence of the 
		null-terminated string little in the
     string big, where not more than len characters are searched
.  Characters that appear after a ‘\0’
     character are not searched.  Since the strnstr() function is a 
	FreeBSD specific API, it should
     only be used when portability is not a concern.

RETURN VALUES
     If little is an empty string, big is returned; if little occurs 
	nowhere in big, NULL is returned;
     otherwise a pointer to the first character of the first 
	occurrence of little is returned.*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == 0)
		return ((char *)big);
	n = ft_strlen(little);
	while (*big && n <= len)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}
