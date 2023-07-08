/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkubina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:53:33 by gkubina           #+#    #+#             */
/*   Updated: 2023/07/08 13:16:05 by event            ###   ########.fr       */
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
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line;

	line = 0;
	while (line < y && (x * y != 0))
	{
		if (line == 0)
			ft_printline(x, '/', '*', '\\');
		if (0 < line && line < y - 1)
			ft_printline(x, '*', ' ', '*');
		if (line == y - 1 && y > 1)
			ft_printline(x, '\\', '*', '/');
		line++;
	}
}
