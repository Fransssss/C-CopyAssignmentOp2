//Declaration of class Myclass

#ifndef C_COPYASSIGNMENTOP2_MYCLASS_H
#define C_COPYASSIGNMENTOP2_MYCLASS_H

class MyClass
{
private:
    int* _value;
public:
    MyClass();                                          // default donstructor
    MyClass& operator=(const MyClass& oriObj);          // copy assignment operator
    ~MyClass();                                         // destructor
    void SetVal(const int& v);
    int GetVal() const;
};


#endif //C_COPYASSIGNMENTOP2_MYCLASS_H
