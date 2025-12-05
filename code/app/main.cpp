#include <iostream>

/* App */
#include "light_controller.h"

/* Middleware */
#include "actuators.h"

using namespace std;

int main(void) {
	/* Middleware */
	middleware::Actuators actuators;
	actuators.init();

	uint i = 0;
	while (i < 6) {
		control::light_controller_update();
		++i;
	}

	return 0;
}
