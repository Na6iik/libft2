/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:31:00 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 19:13:32 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
       The  memcmp()  function  compares  the first n bytes 
		(each interpreted as unsigned char) of the
       memory areas s1 and s2.

RETURN VALUE
       The memcmp() function returns an integer less than, equal to, 
		or greater than zero if the first
       n bytes of s1 is found, respectively, to be less than, 
		to match, or be greater than the first n
       bytes of s2.

       For a nonzero return value, the sign is determined by the sign of 
		the  difference  between  the
       first pair of bytes (interpreted as unsigned char) that
		 differ in s1 and s2.

       If n is zero, the return value is zero.
*/
#include "libft.h"

int	ft_memcmp(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n && *d == *s)
	{
		++d;
		++s;
		--n;
	}
	if (n)
		return (*d - *s);
	else
		return (0);
}
