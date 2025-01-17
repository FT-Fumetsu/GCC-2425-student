#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "Component.hpp"

#include <iostream>

class Entity : public Component {
    public:
    void update() override {
        std::cout << "Entity update!\n";
    }

};

#endif