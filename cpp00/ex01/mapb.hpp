/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapb.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aproust <aproust@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:17:22 by pdosso-d          #+#    #+#             */
/*   Updated: 2024/01/18 11:04:34 by aproust          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPD_H
# define MAPD_H

#include <iostream>
#include <string>

class Contact {
	private:
	std::string	data[5];

  public:
    std::string getData(int i) {
      return data[i];
    }

    void setData(std::string str, int i) {
    	data[i] = str;
    }
};

class PhoneBook {
	private:
	Contact contacts[8];

	public:
	int	phonebookstart();
	int	searchContact();

	Contact getContact(int i) {
		return contacts[i];
	}
};

#endif
