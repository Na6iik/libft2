/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:32:17 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 18:28:18 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
These functions convert lowercase letters to uppercase, and vice versa.
RETURN VALUE
       The value returned is that of the converted letter, 
       or c if the conversion
        was not possible.*/

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
