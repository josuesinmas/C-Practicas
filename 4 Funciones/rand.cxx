#include"iostream"
//incluimos las librerias que nesecita la funcion random
#include"cstdlib"
#include "ctime"



using namespace std;
int main()
{   


    cout << rand();
    

    for(int i =1 ; i<=10;i++){
        cout << rand() << endl;
    }

    int x;
    cin>>x;

    // srand(time(0));

    //otra forma para generar numeros aleatorios es srand(x);
}