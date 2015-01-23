#include <iostream>
#include <unistd.h>

#include "./systemControl/GPIO/GPIO.h"

int main(){
	GPIO ledTest( 89 );
	ledTest.setDirection( GPIO::OUT_DIRECTION );

	while( true ){
		usleep( 1000000 );
		ledTest.setValue( 0 );

		usleep( 1000000 );
		ledTest.setValue( 1 );
	}

	return 0;
}
