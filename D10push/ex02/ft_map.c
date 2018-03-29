/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:42:27 by jduvenh           #+#    #+#             */
/*   Updated: 2018/03/27 17:46:23 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*mytab
	int	i;

	i = 0;
	mytab = (int*)mallock(sizeof(*tab) * length);
	while (i < length )
	{
		mytab[i] = f(tab[i]);
		i++;
	}
	return (mytab);
}
