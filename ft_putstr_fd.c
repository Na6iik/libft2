/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:31:21 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 18:57:42 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description 
Outputs the string ’s’ to the given file descriptor.

Return value 
None
*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
