#include "MyClass.h"
/** i have changed something**/
MyClass::MyClass() : counter(0) {}


void MyClass::setCounter(int value) {
    counter = value;
}

int MyClass::getCounter() const {
    return counter;
}
