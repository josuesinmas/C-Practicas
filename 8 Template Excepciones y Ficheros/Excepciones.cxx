#include "iostream"
using namespace std;
void bloqueTC(){
    try
    {
        int EdadMadre = 29;
        int EdadHIjo = 36;
        if (EdadHIjo>EdadMadre){
            throw 99;
         }
    }
    catch(int x)
    {
        cout <<"Error, codigo "<< x <<endl;
    }
}

int main(){
    try
    {
        int numero1;
        cout<<"dame el primer numero "<<endl;
        cin >> numero1;

        int numero2;
        cout<<"dame el segundo numero"<<endl;
        cin >> numero2;
        if(numero2 == 0){
            throw 0;
        }
        cout <<"resultado: "<<numero1 / numero2<<endl;

    }
    catch(int x)
    {
        cout << "Divicion entre 0 !"<<endl;
    }
    
}