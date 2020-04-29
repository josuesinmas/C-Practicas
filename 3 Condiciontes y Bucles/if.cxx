#include"iostream"
#include"string.h"
using namespace std;
int main()
{
    string nombre;
    cout << "dame tu nombre";
    cin >> nombre;
    if(nombre=="josue")
    {
        cout<<"nola"<<nombre;
        string texto;
        cin >> texto;
        if(texto=="hola"&& nombre=="josue" || false)
        {
            cout<<"encantado como estas";
            if(true)
            {

            }

        }
    }
    else{
        cout<<"hola"<<nombre;
        

    }
    cout<<"hola;";
    int edad=18;
    switch (edad){
        case 17:
        {
            cout<<"no puedes entrar";
            break;
        }
        case 19:{
            cout<<"bienvenido";
            break;

        }
        default:
            cout<<"en caso de que no se cumplan las anteriores";
    }
}
