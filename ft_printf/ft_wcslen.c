/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcslen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenazzo <obenazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 03:03:47 by obenazzo          #+#    #+#             */
/*   Updated: 2016/09/07 03:04:11 by obenazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wcslen(const void *wc)
{
	int i;

	i = 0;
	while (((wchar_t *)wc)[i])
		i++;
	return (i);
}
