/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:31:15 by nben-mou          #+#    #+#             */
/*   Updated: 2022/12/25 18:57:40 by nben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description 
Outputs the string ’s’ to the given file descriptor
followed by a newline.

Return value 
None
*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
