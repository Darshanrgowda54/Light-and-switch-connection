#ifndef WIRE_H
#define WIRE_H

#include <vector>
class Light;

class Wire
{
public:
    //Light* light;

    Wire();
    ~Wire();

    void addLight(Light* light);
    void connected();
    void set(Light* light);
private:
    std::vector<Light*> m_light;
};

#endif // WIRE_H
