#ifndef CONTEXT.HPP
#define CONTEXT.HPP

#include <StateInterface.hpp>
#include <ConcreteState.hpp>

class TrafficLight {
private:
    TrafficLightState *state;

public:
    TrafficLight() : state(new RedState()) {}

    void setState(TrafficLightState *newState) {
        delete state;
        state = newState;
    }

    void change() {
        state->handle();
    }
};

#endif //CONTEXT.HPP