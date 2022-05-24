// Title: copy Assignment Operator
// Purpose: practice use copy assignment operator copy object without changing the actual value
// Author: Fransiskus Agapa
// Have fun - enjoy the process - practices make improvement

#include "MyClass.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << endl;
    MyClass fClass;                   // call default constructor
    MyClass sClass;                   // call default constructor
    cout << "1st value: " << fClass.GetVal() << endl;
    cout << "2nd value: " << sClass.GetVal() << endl;
    cout << endl;

    fClass.SetVal(10);
    sClass = fClass;                  // call copy assignment operator
    cout << "1st value: " << fClass.GetVal() << endl;
    cout << "2nd value: " << sClass.GetVal() << endl;
    cout << endl;
    fClass.SetVal(20);
    cout << "1st value: " << fClass.GetVal() << endl;
    cout << "2nd value: " << sClass.GetVal() << endl;

  
  return 0;
}
