#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <new>

class Brain {
	private :
		std::string _ideas[100];
	public :
		Brain();
		Brain(Brain const & Brain);
		Brain &operator=(Brain const & Brain);
		~Brain();
};

#endif
