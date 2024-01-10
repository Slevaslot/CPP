#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string>
#include <new>
#include <stdio.h>
#include <string.h>

class Harl {
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		void isDebugOk(void);
		void isInfoOk(void);
		void isWarningOk(void);
		void isErrorOk( void );
		int complain( std::string level );
};

#endif
