#ifndef FILE_LINUX_H
#define FILE_LINUX_H

#include <fstream>
#include <string>
#include <iostream>

#include "../../other/GlobalFunctions.h"

class FileLinux{
	public:
		bool read( std::string path, std::string &value );
		bool read( std::string path, int &value );

		bool write( std::string path, std::string value );
		bool write( std::string path, int value );
};

#endif
