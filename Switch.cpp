#include "Switch.h"
#include <iostream>

Switch::Switch()
{
    std::cout<<"Switch Constructor Called"<<std::endl;
}

Switch::~Switch()
{
    std::cout<<"Switch Destructor Called"<<std::endl;
}

void Switch::inti(Wire *w)
{
    std::cout<<"Init Function Called"<<std::endl;
    this->wire = w;
}

void Switch::on()
{
    std::cout<<"Switch is now ON"<<std::endl;
    wire->connected();
}

