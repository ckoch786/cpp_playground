#include "light_controller.h"
#include "actuators.h"

#include <iostream>
using namespace std;

namespace control {
    LightController::LightController() {

    }

    void LightController::update(void) {
        cout << "Light Controller Update..." << endl;
    }
}