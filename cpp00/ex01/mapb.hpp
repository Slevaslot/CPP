/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapb.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdosso-d <pdosso-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:17:22 by pdosso-d          #+#    #+#             */
/*   Updated: 2023/12/11 16:18:07 by pdosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPD_H
# define MAPD_H

#include <iostream>
#include <string>
using namespace std;

class Contact {
	private:
	string	data[5];

  public:
    // Getter
    string getData(int i) {
      return data[i];
    }

    //Setter
    void setData(string str, int i) {
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
