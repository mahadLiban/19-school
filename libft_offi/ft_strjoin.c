/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliban-s <mliban-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 09:02:37 by mliban-s          #+#    #+#             */
/*   Updated: 2022/01/10 12:54:28 by mliban-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		longeur;
	char	*malong;
	int		i;

	if (s1 == NULL)
		return (NULL);
	longeur = ft_strlen(s1)+ft_strlen(s2);
	malong = malloc(sizeof(char) * (longeur +1));
	if (malong == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' )
	{
		malong[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		malong[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	malong[longeur] = '\0';
	return (malong);
}
