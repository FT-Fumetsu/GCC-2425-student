#include <Context.hpp>
#include <ConcreteState.hpp>

int main() {
    TrafficLight trafficLight;

    trafficLight.change();  // Initial state: Red
    trafficLight.setState(new GreenState());
    trafficLight.change();  // State changed to Green

    return 0;
}   