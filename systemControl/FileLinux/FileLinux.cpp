#include "./FileLinux.h"

bool FileLinux::write( std::string path, std::string value ){
	std::ofstream file( path.c_str() );
	if( file < 0 ){
		return false;
	}

	file << value;
	file.close();

	return true;
}

bool FileLinux::read( std::string path, std::string &value ){
	std::ifstream file( path.c_str() );
	if( file < 0 ){
		return false;
	}

	file >> value;
	file.close();

	return true;
}

bool FileLinux::read( std::string path, int &value ){
	std::string resultString;

	read( path, resultString );

	value = GlobalFunctions::stringToInt( resultString );


	return true;
}

bool FileLinux::write( std::string path, int value ){
	std::string stringValue = GlobalFunctions::intToString( value );

	return write( path, stringValue );
}
