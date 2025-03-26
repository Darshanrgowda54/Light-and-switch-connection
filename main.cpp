#include "Switch.h"
#include "Wire.h"
#include "Light.h"
#include <iostream>

using namespace std;

int main()
{
    Wire *wire = nullptr;
    wire = new Wire;

    // Light *light;
    // light = new Light;
    // light->setwire(wire);

    int lightNumber;
    std::cout<<"Enter the Number of Lights: ";
    std::cin>>lightNumber;
    std::vector<Light*> light;

    for(int i = 0; i < lightNumber; i++)
    {
        Light* newlight = new Light;
        light.push_back(newlight);
        newlight->setwire(wire);
    }

    Switch *switch1;
    switch1 = new Switch;
    switch1->inti(wire);
    switch1->on();

    delete wire;
    for(auto l : light)
    {
        delete l;
    }
    delete switch1;

    return 0;
}
