#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(std::string arg) {
    int i = arg.length() - 1;
    
    while (i >= 0)
    {
        if (arg[i] == '/' || arg[i] == '*' || arg[i] == '+' || arg[i] == '-')
            _stack2.push(arg[i]);
        else if (arg[i] >= '0' && arg[i] <= '9')
            _stack.push(arg[i] - '0');
        else if (arg[i] != ' ')
            throw std::invalid_argument("Invalid character in input");
        i--;
    }
    if (_stack.size() != _stack2.size() + 1)
        throw std::invalid_argument("Number of operations does not match the number of digit");
}

RPN::RPN(const RPN &rpn) {
    *this = rpn; 
}

RPN &RPN::operator=(const RPN &rpn) {
    _stack = rpn._stack;
    return *this;
}

RPN::~RPN() {}

int RPN::calculate() {
    int value = _stack.top();
    while(_stack.size() > 1) {
        _stack.pop();
        if (_stack2.top() == '/')
            value = value / _stack.top();
        else if (_stack2.top() == '*')
            value = value * _stack.top();
        else if (_stack2.top() == '+')
            value = value + _stack.top();
        else if (_stack2.top() == '-')
            value = value - _stack.top();
        _stack2.pop();
    }
    return value;
}