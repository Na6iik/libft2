/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:16:42 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 18:14:32 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  isalpha()
              checks  for an alphabetic character; in the standard "C" locale,
              it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
              cales, there may be additional characters for which isalpha() is
              true—letters which are neither uppercase nor lowercase.
RETURN VALUE
       The  values  returned  are  nonzero  if  the character c falls into the
       tested class, and zero if not.
*/
#include "libft.h"

static int	ft_isupper(int c)
{
	return ('A' <= c && c <= 'Z');
}

static int	ft_islower(int c)
{
	return ('a' <= c && c <= 'z');
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
/*#include <stdio.h>
int main()
{
	printf("%i\n",ft_isalpha('d'));

}*/