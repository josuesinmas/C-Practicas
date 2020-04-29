#include "MYCLASS.h"
#include "iostream"

MyClass::MyClass()
{
   //ctor
}
int main(){
MyClass obj;
MyClass *ptr = &obj;

MyClass otro;
MyClass *ptr = &otro;
ptr->PrintLn();
}

