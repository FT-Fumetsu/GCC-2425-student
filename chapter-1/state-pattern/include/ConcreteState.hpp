#ifndef CONCRETESTATE.HPP
#define CONCRETESTATE.HPP

#include <StateInterface.hpp>
#include <iostream>

class RedState : public TrafficLightState {
public:
    void handle() override {
        std::cout << "Traffic Light is Red\n";
    }
};

class YellowState : public TrafficLightState {
public:
    void handle() override {
        std::cout << "Traffic Light is Yellow\n";
    }
};

class GreenState : public TrafficLightState {
public:
    void handle() override {
        std::cout << "Traffic Light is Green\n";
    }
};

#endif //CONCRETESTATE.HPP