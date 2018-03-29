/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:47:36 by jduvenh           #+#    #+#             */
/*   Updated: 2018/03/27 17:50:32 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char*))
{
	int 	i;
	i = 0;
	while (tab[i][0] != '0')
	{
		if (f(tab[i]) == 1)
		{
			return (1);
		}
		i++;
	}

}