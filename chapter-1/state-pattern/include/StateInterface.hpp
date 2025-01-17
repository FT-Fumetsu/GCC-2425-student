#ifndef STATEINTERFACE.HPP
#define STATEINTERFACE.HPP

class TrafficLightState {
public:
    virtual void handle() = 0;
};

#endif //STATEINTERFACE.HPP