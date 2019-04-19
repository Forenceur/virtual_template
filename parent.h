#ifndef A_H
#define A_H

#include <typeinfo>

class parent
{

public:
    parent();
    virtual ~parent();

    template<typename T>
    void templateInterface(T & data)
    {
        data++;
        inheritedMethod(static_cast<void *>(&data), typeid (data));
    }

private:
    virtual void inheritedMethod(void * data, const std::type_info & typeData) = 0;

};

#endif // A_H
