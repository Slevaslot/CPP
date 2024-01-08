/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aproust <aproust@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:57:34 by aproust           #+#    #+#             */
/*   Updated: 2023/12/20 17:39:02 by aproust          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

string	Contact::get_str1(void)
{
	return (str1);
}

void	Contact::set_str1(string str)
{
	str1 = str;
	return (str);
}

int	main(void)
{
	Contact	c;

	c.set_str1("truc");
	std::cout << c.get_str1() << std::endl;
}
