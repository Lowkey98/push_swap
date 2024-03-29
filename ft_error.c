/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayafdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 19:38:45 by ayafdel           #+#    #+#             */
/*   Updated: 2021/06/07 19:38:45 by ayafdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_number(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		if ((argv[i][0] == '-') && ft_is_digit(argv[i][1]))
			j++;
		while (argv[i][j])
		{
			if (!ft_is_digit(argv[i][j]))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			j++;
		}
		i++;
	}
}

void	is_duplicate(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (!ft_strcmp(argv[i], argv[j]))
			{
				write(1, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	is_int(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if ((argv[i][0] != '-' && ft_strlen(argv[i]) > 10) || \
		((argv[i][0] != '-') && ft_strlen(argv[i]) == 10 \
		&& ft_strcmp(argv[i], "2147483647") > 0))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		if ((argv[i][0] == '-' && ft_strlen(argv[i]) > 11) || \
		 ((argv[i][0] == '-') && ft_strlen(argv[i]) == 11 \
		&& ft_strcmp(argv[i], "-2147483648") > 0))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

void	ft_error(int argc, char **argv)
{
	is_number(argc, argv);
	is_duplicate(argc, argv);
	is_int(argc, argv);
}
