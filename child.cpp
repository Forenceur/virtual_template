#include "child.h"

child::child() : parent::parent()
{

}

void child::inheritedMethod(void * data,const std::type_info & typeData)
{
    if(typeData == typeid (int))
    {
        actualMethod(*static_cast<int *>(data));
    }
    else {
        std::cout  << "data is not a int" << std::endl;
        std::cout << "type fourni  : " << typeData.name() << std::endl;
        std::cout << "type attendu : " << typeid (int).name() << std::endl;
        return;
    }

}

child::~child()
{
}
