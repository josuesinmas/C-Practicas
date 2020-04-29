#include "iostream"
#include "string"
using namespace std;

class Mother
{
    public:
        Mother() {} ;
        void decirHello()
        {   
            cout << "hola " ;
        }

};
/*
class Daghter 
{
    public:
        Dauther() {} ;
};

*/
class Daghter : public Mother // pueden ser otros controladores de acceso como private o protected
{
    public:
        string Nombre;
        
        Daghter() {};
        string Hablar(string nombre)
        {   
            //nombre=Nombre;
            cout<<"dime tu nombre"<<endl;
            cin >> nombre;
        }

    
    private:
        string DecirPista(string nombre)
        {

        }
};

int main()

{
    Daghter Maria;//creamos a maria en la escena o funcion principal
    Maria.decirHello();//llamamos a la funcion 

}

