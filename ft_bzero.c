/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:29:31 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 18:23:09 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The  bzero()  function  erases  the  data  in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes  con‐
       taining '\0') to that area.

       The  explicit_bzero()  function  performs the same task as bzero().  It
       differs from bzero() in that it guarantees that compiler  optimizations
       will  not  remove  the erase operation if the compiler deduces that the
       operation is "unnecessary".

RETURN VALUE
       None.
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n)
	{
		*p++ = 0;
		--n;
	}
}
