#include "Light.h"
#include <iostream>

Light::Light()
{
    std::cout<<"Light Constructor Called"<<std::endl;
}

Light::~Light()
{
    std::cout<<"Light Destructor Called"<<std::endl;
}

void Light::setwire(Wire *w)
{
    std::cout<<"Setwire Function Called"<<std::endl;
    wire = w;
    w->set(this);
}

static int Lightcount = 0;
void Light::on()
{
    std::cout<<"Light On "<<std::endl;
    Lightcount++;
    std::cout<<"Number of Lights ON: "<<Lightcount<<std::endl;
}
