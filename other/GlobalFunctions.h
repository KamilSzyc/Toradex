#ifndef GLOBAL_FUNCTIONS_H
#define GLOBAL_FUNCTIONS_H

#include <string>
#include <sstream>

class GlobalFunctions{
	public:
		static int 			stringToInt( std::string value );
		static std::string	intToString( int value );
};

#endif
