/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 04:05:55 by kpeng             #+#    #+#             */
/*   Updated: 2018/08/24 15:36:48 by kpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	if ((ptr = dest) == 0)
		return (char *)(0);
	while ((*ptr++ = *src++))
		;
	return (dest);
}
