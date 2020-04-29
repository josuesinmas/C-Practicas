#include "iostream"
using namespace std;

//funcion normal
int suma (int x, int y){
    return x + y;
}

//Creamos la plantilla
template <class T>

T PlantillaSuma(T a, T x){
    return a + b;

}
//Plantilla para decir el menor de los dos parametros 
template <class J, class L>
J Menor(J a, L b){
    return (a < b ? a : b)
}

int main(){
    int x = 7, y = 19;
    cout << suma(x,y)<<endl;
    float velocidad = 15.35, masa = 38.72;
    bool vivo=true,TocandoSuelo=false;
    

    cout << PlantillaSuma(x,y)<<endl;
    cout << PlantillaSuma(velocidad,masa)<<endl;
    cout << PlantillaSuma(vivo,TocandoSuelo)<<endl;
    cout << Menor(x,velocidad)<<endl;
}