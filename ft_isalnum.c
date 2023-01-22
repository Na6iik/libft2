/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:29:41 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 18:18:53 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*isalnum()
              checks for an alphanumeric character; it is equivalent to (isal‐
              pha(c) || isdigit(c)).
			  
RETURN VALUE
       The  values  returned  are  nonzero  if  the character c falls into the
       tested class, and zero if not.
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
