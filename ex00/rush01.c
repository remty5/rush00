/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkubina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:53:33 by gkubina           #+#    #+#             */
/*   Updated: 2023/07/08 11:59:26 by gkubina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(int length, char first, char middle, char last)
{
	int	length_counter;

	length_counter = 0;
	while (length_counter < length)
	{
		if (length_counter == 0)
			ft_putchar(first);
		if (length_counter < length - 1 && length_counter != 0)
			ft_putchar(middle);
		if (length_counter == length - 1 && length > 1)
			ft_putchar(last);
		length_counter++;
	}
	ft_putchar(10);
}

void	rush(int wide, int height)
{
	int	wide_counter;
	int	height_counter;

	wide_counter = 0;
	height_counter = 0;
	while (height_counter < height && (wide * height != 0))
	{
		if (height_counter == 0)
			ft_printline(wide, '/', '*', 92);
		if (height_counter < height - 1 && height_counter != 0)
			ft_printline(wide, '*', ' ', '*');
		if (height_counter == height - 1 && height > 1)
			ft_printline(wide, 92, '*', '/');
		height_counter++;
	}
}
