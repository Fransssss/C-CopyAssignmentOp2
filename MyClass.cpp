// Implementation of class Myclass

#include "MyClass.h"
#include <iostream>
using std::cout;
using std::endl;

MyClass::MyClass()
{
    cout << "[Default Constructor]" << endl;
    _value = new int;           // set a block memory before assign any value
    *_value = 0;
}

MyClass &MyClass::operator=(const MyClass &oriObj)
        {
            cout << "[Copy Assignment Operator]" << endl;
            if(this != &oriObj)                  // make sure the object we are going to assign are different
            {
                delete _value;                   // delete old value
                _value = new int;                 // set new block of memory
                *_value = *(oriObj._value);      // assign new value
            }
            return *this;
        }

MyClass::~MyClass()
{
    cout << "[Destructor Class]" << endl;
    delete _value;                              // clear memory block after done with program/class
}

void MyClass::SetVal(const int &v)
{
    cout << "[Set a value]" << endl;
    *_value = v;
}

int MyClass::GetVal() const
{
    return *_value;
}

