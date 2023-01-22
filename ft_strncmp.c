/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:31:57 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 19:18:06 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
       The strcmp() function compares the two strings s1 and s2. 
		 The locale is not taken into account
       (for a locale-aware comparison, see strcoll(3)).  It returns 
	an integer less than, equal to, or
       greater  than  zero if s1 is found, respectively, to be less than,
		 to match, or be greater than s2.

       The strncmp() function is similar, except it compares only the
		 first (at most) n  bytes  of  s1
       and s2.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n && *ptr1 && *ptr1 == *ptr2)
	{
		++ptr1;
		++ptr2;
		--n;
	}
	if (n)
		return (*ptr1 - *ptr2);
	else
		return (0);
}
