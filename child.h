#ifndef B_H
#define B_H

#include "parent.h"
#include <iostream>

class child : public parent
{
public:
    child();
    ~child();

private:
    virtual void inheritedMethod(void * data, const std::type_info & typeData);
    template<typename T>
    void actualMethod(T & a)
    {
        a++;
    }
};

#endif // B_H
