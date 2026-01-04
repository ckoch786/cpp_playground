#ifndef HAL_LIGHT_H
#define HAL_LIGHT_H

namespace drivers {
    class HAL_Light_Driver {
        public:
        HAL_Light_Driver();
        int init(&dev);
        int set_state(&dev, val);
    };

    class HAL_Light {
        public:
        HAL_Light();
        int init(&dev);
        int write(&dev, uint8_t val);
        private:
        HAL_Light_Driver s_drv;

    };
}
#endif