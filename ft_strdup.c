/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:31:31 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 19:11:00 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The  strdup()  function returns a pointer to a new string which is 
		a duplicate of the string s.
       Memory for the new string is obtained with malloc(3),
		 and can be freed with free(3).
RETURN VALUE
       On  success, the strdup() function returns a pointer to the duplicated
		 string.  It returns NULL
       if insufficient memory was available, with errno set 
		to indicate the cause of the error.*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s) + 1;
	new = (char *)malloc(sizeof(*new) * len);
	if (!new)
		return (NULL);
	return ((char *)ft_memcpy(new, s, len));
}
