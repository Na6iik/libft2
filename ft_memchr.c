/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:30:56 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 19:20:56 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
       The  memchr()  function  scans  the  initial n bytes of the 
		memory area pointed to by s for the
       first instance of c.  Both c and the bytes of the memory area 
		pointed to by s  are  interpreted
       as unsigned char.

RETURN VALUE
       The memchr() and memrchr() functions return a pointer to the matching 
		byte or NULL if the char‐
       acter does not occur in the given memory area.
*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (n && *ptr != c)
	{
		++ptr;
		--n;
	}
	if (n)
		return ((void *)ptr);
	else
		return (NULL);
}
