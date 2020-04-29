#include <iostream>
using namespace std;
class Daughter : public Mother
{
 public: 
  Daughter() {};
};


class Mother
{
 public:
  Mother() {};
  void sayHi() {
   cout << "Hi";
  }
};

class Daughter: public Mother
{
 public:
  Daughter() {};
};
class Madre {
 public:
 Madre(int i=23) 
 {
  cout <<"Mother ctor"<<i<<endl;
 }
 ~Madre()
 {
  cout <<"Mother dtor"<<endl;
 }
};

class Hija: public Madre {
public:
 Hija()
 {
  cout <<"Daughter ctor"<<endl;
 }
 ~Hija()
 {
  cout <<"Daughter dtor"<<endl;
 }
};

int main() {
  Daughter d;
  d.sayHi();
  Madre M;
  M.Madre;
  Hija H;
  
}
//"Hi"
//"Mother ctor"
/*Outputs
Mother ctor
Daughter ctor
Daughter dtor
Mother dtor
*/