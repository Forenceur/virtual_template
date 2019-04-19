#include <iostream>

#include "child.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    int a = 1;
    parent* object = new child();
    object->templateInterface(a);

    cout << "a = " <<a<<endl;

    delete  object;

    return 0;
}
