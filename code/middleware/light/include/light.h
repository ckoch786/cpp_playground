#ifndef LIGHT_H
#define LIGHT_H
#include "actuator.h"

namespace middleware {
    class LED_Device {
    public:
        string gpio_ctx;
        uint8_t pin;
    }

    class Light: public Actuator {
    public:
        Light();
        void init(void);
        void write(bool on);
    private:
       LED_Device led_dev;
    }
    };
}

#endif