#include "iostream"
#include "fstream"
using namespace std;

int main(){
    

    ofstream MiArchivo;
    MiArchivo.open("Test.txt");
    MiArchivo<<" Texto dentro del archivo"<<endl;
    MiArchivo.close();


    if (MiArchivo.is_open()){
        MiArchivo<<"este texo sustituiria al anterior";

    }
    else {
        cout << "algo salio mal";

    }
    MiArchivo.close();

    
    
    


    /*
    otras formas de abrir un archivo
    MiArchivo.open("Test.txt", ios::app | ios::trunc);
    ios::app    agregar al final del archivo
    ios::ate    ir al final del archivo al abrir
    ios::binary     arir el aarchivo en modo binario
    ios::in   Abrir el archivo en solo lectura
    ios::out  abrir el archivo en solo escritura
    ios::trunc   borra los contenidos del archibo existente
    */
}
