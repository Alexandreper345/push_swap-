/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 20:43:49 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/10 20:44:42 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long  int	ft_atol(const char *nptr)
{
	long int	i;
	long int	signal;
	long int	temp;

	i = 0;
	signal = 1;
	temp = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i + 1] == '-' || nptr[i + 1] == '+')
			return (0);
		if (nptr[i] == '-')
			signal *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		temp = temp * 10 + (nptr[i] - '0');
		i++;
	}
	return (signal * temp);
}
