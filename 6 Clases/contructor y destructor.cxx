#include "MYCLASS.h"
#include <iostream>
using namespace std;

const int x = 42;

MyClass::MyClass()
{
  cout<<"Constructor"<<endl;
}

MyClass::~MyClass()
{
  cout<<"Destructor"<<endl;
}

int main() {
  MyClass obj;
  obj.PrintLn();
}
// Outputs "Hello"