#include "./GlobalFunctions.h"

int GlobalFunctions::stringToInt( std::string value ){
	int result;
	std::stringstream ss( value );
	ss >> result;

	return result;
}


std::string GlobalFunctions::intToString( int value ){
	std::stringstream ss;
	ss << value;
	return ss.str();
}
