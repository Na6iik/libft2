/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:32:14 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 18:57:52 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description
			Allocates (with malloc(3)) and returns a substring
			from the string ’s’.
			The substring begins at index ’start’ and is of
			maximum size ’len’.
Return value 
	The substring.
	NULL if the allocation fails.
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subst;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	subst = (char *)malloc(sizeof(char) * (len + 1));
	if (!subst)
		return (NULL);
	ft_strlcpy(subst, s + start, len + 1);
	return (subst);
}
