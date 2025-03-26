#ifndef SWITCH_H
#define SWITCH_H

#include "Wire.h"
class Switch
{
public:
    Switch();
    ~Switch();

    void inti(Wire* w);
    void on();
private:
    Wire* wire;
};

#endif // SWITCH_H
