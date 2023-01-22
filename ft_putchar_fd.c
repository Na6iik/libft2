/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:31:12 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 18:57:32 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description
Outputs the character ’c’ to the given file descriptor.

Return value 
None
*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
