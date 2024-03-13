#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include <fstream>
#include <sstream>

class RPN {
	public :
		RPN();
		RPN(std::string arg);
		RPN(const RPN &a);
		~RPN();
		RPN &operator=(const RPN &a);
        int calculate();
	private :
		std::stack<int> _stack;
        std::stack<char> _stack2;
};

#endif