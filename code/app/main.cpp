#include <iostream>

/* App */
#include "light_controller.h"

/* Middleware */
#include "actuators.h"

using namespace std;

int main(void) {
	/* Middleware */
	middleware::Light light;
	light.init();
	control::LightController lightController;

	uint i = 0;
	while (i < 6) {
		lightController.update();
		++i;
	}

	return 0;
}
