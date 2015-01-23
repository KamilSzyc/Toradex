#include "./GPIO.h"

GPIO::GPIO( int pad ){
	this->fileLinux.write( "/sys/class/gpio/export", pad );
	this->pad = pad;

	this->path = "/sys/class/gpio/gpio" + GlobalFunctions::intToString( pad );
}

GPIO::~GPIO(){
	this->fileLinux.read( "/sys/class/gpio/unexport", this->pad );
}

void GPIO::setDirection( bool direction ){
	std::string path =  this->path + "/direction";

	if( direction == GPIO::IN_DIRECTION ){ this->fileLinux.write( path, "in" ); }
	if( direction == GPIO::OUT_DIRECTION ){ this->fileLinux.write( path, "out" ); }
}

void GPIO::setValue( int value ){
	std::string path = this->path + "/value";
	this->fileLinux.write( path, value );
}

int GPIO::getValue(){
	int value;

	std::string path = this->path + "/value";
	this->fileLinux.read( path, value );
	return value;
}

int GPIO::getPad(){
	return this->pad;
}
