/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:58:12 by dasargsy          #+#    #+#             */
/*   Updated: 2024/06/26 01:11:30 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlen(char const *c)
{
	size_t	i;

	i = 0;
	if (!c)
		return (0);
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
