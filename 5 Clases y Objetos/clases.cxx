#include<iostream>
using namespace std;

class Account {
  public:
    void sayHi() {
      cout << "Hi" << endl;
    }
};
class Espada{

  bool EstaAtacando=false;
  
  public:
    int daño=15;
    int Deterioro =100;
    void Atacar(int De,int da){
      if (EstaAtacando==true&&Deterioro>1){
        cout<<"has echo "<<daño<<"de daño";

      }
    }
  private:
  bool Abilidad;
  int Activar(bool x){
    x=Abilidad;
    if(x==true){
      cout<<"se ejecuto la abilidad";
    }
  }

  protected:
    float pi=3.14159;

};
int main() 
{
  Espada fuego;
  fuego.Atacar(32,23);
}