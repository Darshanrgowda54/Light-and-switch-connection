#include "Wire.h"
#include "Light.h"
#include <iostream>

Wire::Wire()
{
    std::cout<<"Wire Constructor Called"<<std::endl;
}

Wire::~Wire()
{
    std::cout<<"Wire Destructor Called"<<std::endl;
}

void Wire::addLight(Light *light)
{
    std::cout<<"Light ADD function Called"<<std::endl;
    m_light.push_back(light);
}

void Wire::connected()
{
    std::cout<<"Wire Connected to Switch"<<std::endl;
    for(auto light : m_light)
    {
        light->on();
    }
}

void Wire::set(Light* light)
{
    std::cout<<"Wire Set"<<std::endl;
    this->addLight(light);
}
