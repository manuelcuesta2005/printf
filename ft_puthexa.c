/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:34:46 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/11/04 17:34:48 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_puthexa(unsigned long pointer)
{
	int		i;
	int		nibble;
	char	hex[] = "123456789ABCDEF";
	char	buffer[16];
	i = 0;

	while (pointer > 0)
	{
		nibble = pointer % 16;
		buffer[i++] = hex[nibble];
		pointer /= 16;
	}

	while (i >= 0)
	{
		ft_putchar(buffer[i]);
	}	
	return (0);
}