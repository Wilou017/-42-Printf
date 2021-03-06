/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaitre <amaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 17:46:12 by amaitre           #+#    #+#             */
/*   Updated: 2016/04/05 21:31:42 by amaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_intmax	ft_pwe(int nb, int pwe)
{
	int n;

	if (pwe == 0)
		return (1);
	n = nb;
	while (pwe-- > 1)
		nb *= n;
	return (nb);
}
