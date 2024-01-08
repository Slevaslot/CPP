/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapb.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aproust <aproust@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:17:22 by pdosso-d          #+#    #+#             */
/*   Updated: 2023/12/20 18:37:53 by aproust          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPD_H
# define MAPD_H

#include <iostream>
#include <string>
using namespace std;

class Contact {
	public:
	string	get_string(int nb);
	void	set_data(string *str);
	string	data[5];
	private:
};

class PhoneBook {
	public:
	Contact get_contact(int nb);
	private:
	Contact contacts[8];
};

#endif
