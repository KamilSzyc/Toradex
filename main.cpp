#include <iostream>
#include <unistd.h>

#include "./systemControl/GPIO/GPIO.h"

int main(){
	GPIO led( 89 );
	GPIO button( 46 );

	led.setDirection( GPIO::OUT_DIRECTION );
	button.setDirection( GPIO::IN_DIRECTION );

	while( true ){
		usleep( 10000 );
		if( button.getValue() == 0 ){
			led.setValue( 1 );
		} else {
			led.setValue( 0 );
		}
	}

	return 0;
}
