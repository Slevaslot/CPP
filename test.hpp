/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aproust <aproust@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:17:22 by pdosso-d          #+#    #+#             */
/*   Updated: 2023/12/20 17:39:15 by aproust          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPD_H
# define MAPD_H

#include <iostream>
#include <string>
using namespace std;

class Contact {
	public:
	string	get_str1();
	string	get_str2();
	string	get_str3();
	string	get_str4();
	string	get_str5();

	void	set_str1(string str);
	void	set_str2(string str);
	void	set_str3(string str);
	void	set_str4(string str);
	void	set_str5(string str);
	private:
	string	str1;
	string	str2;
	string	str3;
	string	str4;
	string	str5;

};

class PhoneBook {

	public:
	Contact	*get_contact();
	private :
	Contact contacts[8];
};

#endif
