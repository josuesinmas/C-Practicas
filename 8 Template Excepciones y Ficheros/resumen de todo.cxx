#include "iostream"
#include "math.h"
#include "string"
#include "stdlib.h"
#include "time.h"

using namespace std;

class DatosTipe
{
   
    public:
        int ataque;
       
	
        float vida = 100;
        bool Vivo = true ,TocandoSuelo;
        string Nombre;
        char Gremio = 'J';

        int FuncionAtacar(float VidEnemigo ,float DefEnemigo) 
        {
            srand(time(NULL));
            int ataque=rand()%8;
            int boton;
            cin>>boton;
            if (Vivo == true && ataque > 0)
            {
                while (VidEnemigo>0)
                {
                    cout<<"Has echo"<<ataque<<" de daño"<<endl; 
                }
            }
            else if (Vivo==true && ataque <= 0)
            {
                cout<<"no has echo daño"<<endl;
            }
            else if (Vivo==false)
            {
                cout<<"estas muesto"<<endl;
            }
            
            
        }
    

};
class EntradaSalida
{
    int edad;
    string Primera()
    {

        cin >> edad;

    }
    
};