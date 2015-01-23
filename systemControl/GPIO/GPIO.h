#ifndef GPIO_H
#define GPIO_H

#include <string>
#include "./../FileLinux/FileLinux.h"
#include "../../other/GlobalFunctions.h"

class GPIO{
	private:
		int pad;
		std::string path;
		FileLinux fileLinux;
	public:
		enum { OUT_DIRECTION	= true };
		enum { IN_DIRECTION		= false };

		GPIO( int pad );
		~GPIO();

		void setDirection( bool direction );
		void setValue( int value );
		int getValue();

		int getPad();
};

#endif
