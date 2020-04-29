#include "iostream"
#include "time.h"
#include "string" 
#include "stdlib.h"
using namespace std;
string trabajo(string Tienes_examenes){

//definimos el ramdon y declaramos las variables enteras 
	srand(time(NULL));
	int RandExamenes=rand()%4;
	int RandMatematicas=rand()%4;
	int RandEjercicio=rand()%2;
	int RandRelax=rand()%3;
	int RandTareas=rand()%3;
	string objetivo;
//declaramos los array de string con las tareas
	string asignatura[5]={" fol "," mtj "," red "," aif "," ssv "};
		
	string Matematicas[5]={"algebra lineal","estadisticas","Derivadas","integrales","matrices"};
		
	string Ejercicios[3]={"Fisico","leer","juegosMentales"};
		
	string Relax[4]={"Escribir libro","Meditar","Alongar","Escuchar musica"};
		
	string Tareas[4]={"lavar los platos","limpiar el patio del perro","limpiar y organizar la casa","limpiar la cocina"};
//asignamos los array con las variables enteras random a unas variables string
	string asig=asignatura[RandExamenes];
	string mat=Matematicas[RandMatematicas];
	string ejer=Ejercicios[RandEjercicio];
	string rel=Relax[RandRelax];
	string tar=Tareas[RandTareas];
//se ejecuta si tienes examen
	if (Tienes_examenes=="si"){
		string DeQue;
		cout<<"de que tienes examen";
		
		for(int i=0 ; i<5 ; i++ ){
			cout<<endl<<asignatura[i]<<endl;
		}
		cin>>DeQue;
		objetivo ="estudia dos horas de "+DeQue+" ademas de "+mat+" un poco de ejercicios "+ejer+" no olvides relajarte con "+rel+" y de tareas de casa "+tar;	
	
	}
//de lo contrario
	else if(Tienes_examenes=="no"){
		objetivo="Estudia"+asig+" ademas de "+mat+" un poco de ejercicios "+ejer+" no olvides relajarte con "+rel+" y de tareas de casa "+tar;
		}
//en otros casos
	else {
		objetivo="Estudia"+asig+" ademas de "+mat+" un poco de ejercicios "+ejer+" no olvides relajarte con "+rel+" y de tareas de casa "+tar;
	}
return objetivo;
}

int main(){
	string examen;
	string adios;
	cout<<"tienes examene ?"<<endl;
	cin>>examen;
	cout<<trabajo(examen);
	cout<<endl<<"espero que sigas mi consejo";
	cin>>adios;
	return 0;
}