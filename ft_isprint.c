/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:30:08 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 18:20:34 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
isprint()
              checks for any printable character including space.

RETURN VALUE
       The  values  returned  are  nonzero  if  the character c falls into the
       tested class, and zero if not.
*/
#include "libft.h"

int	ft_isprint(int c)
{
	return (31 < c && c < 127);
}
