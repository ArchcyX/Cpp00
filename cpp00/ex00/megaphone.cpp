/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megahone.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 11:30:41 by alermi            #+#    #+#             */
/*   Updated: 2025/09/06 11:39:22 by alermi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = argv[i][j] - 32;
				std::cout << argv[i][j];
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
