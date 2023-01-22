/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:30:00 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 18:19:41 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
isascii()
              checks whether c is a 7-bit unsigned char value that  fits  into
              the ASCII character set.
RETURN VALUE
       The  values  returned  are  nonzero  if  the character c falls into the
       tested class, and zero if not.*/
#include "libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
