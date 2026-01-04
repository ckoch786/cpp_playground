#ifndef ACTUATORS_H
#define ACTUATORS_H


namespace middleware {
    class Actuators {
    public:
        virtual void init(void) = 0;
        virtual void write(bool on);
    };
}

#endif