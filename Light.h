#ifndef LIGHT_H
#define LIGHT_H

#include "Wire.h"
class Light
{
public:
    Light();
    ~Light();

    void setwire(Wire* w);
    void on();
private:
    Wire* wire;
};

#endif // LIGHT_H
