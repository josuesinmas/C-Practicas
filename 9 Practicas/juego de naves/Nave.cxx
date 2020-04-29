#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>

#include<list>

using namespace std;

#define ARRIBA 72   //definimos las entradas de las flechas
#define IZQUIERDA 75    // en el caso de no definirlas podriamos pasar los numeros que queremos del codigo ascii
#define DERECHA 77
#define ABAJO 80

void gotoxy(int x, int y)   // creamos una funcion gotoxy que servira para situarnos en las coordenadas que nesecitemos 
{
    HANDLE IDConsola;   //creamos el tipo de dato HANDLE, el identificador y le damos el nombre que queramos   
    IDConsola = GetStdHandle(STD_OUTPUT_HANDLE);    // tomamos el control de la salida de la consola,
    COORD dwPos;    //creamos la variable en la que guardaremos las cordenadas
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(IDConsola, dwPos); //tenemos que saber la id de la ventana a utilizar y las coordenadas
}

void OcultarCusor()
{
    HANDLE IDConsola;
    IDConsola = GetStdHandle(STD_OUTPUT_HANDLE);
    _CONSOLE_CURSOR_INFO cci;   // nos permite manipular las caracteristicas del cursor
    cci.dwSize = 50;    //tamaño del cusor
    cci.bVisible = FALSE;   //visibilidad del cursor
    SetConsoleCursorInfo(IDConsola ,&cci);  //pasamos como parametros el Id de la consola y la referencia a las caracteristicas del cursor

}

void PintarLimites()
{
    for(int i = 2 ; i < 78 ; i++)   //utilizamos el bucle for para pintar el escenario
    {
        gotoxy(i,3); printf("%c",205);  //pintamos las barras orizontales
        gotoxy(i,33); printf("%c",205);
    }
    for(int i = 4 ; i < 33 ; i++)
    {
        gotoxy(2,i); printf("%c",186);  //pintamos las barras verticales
        gotoxy(77,i); printf("%c",186);
    }
    gotoxy(2,3); printf("%c",201);  //pintamos las esquinas
    gotoxy(2,33); printf("%c",200);
    gotoxy(77,3); printf("%c",187);
    gotoxy(77,33); printf("%c",188);
}

class NAVE{
    int x,y,corazones,vidas;  //los atributos seran privados por defecto
    public:
        NAVE(int _x, int _y, int _corazones, int _vidas): x(_x), y(_y), corazones(_corazones), vidas(_vidas){} //en el constructor espesificamos que valores tendra y , x y corazones
        int X(){ return x; } //las funciones X,Y y VID nos sirven para no dar acceso a las propiedades privadas pero optener el valor
        int Y(){ return y; }
        int VID(){return vidas;} 

        void impact(){corazones--;} // si se ejecuta a corazones se le resta 1 

        void pintar();
        void borrar();
        void mover();
        void pintarCorazones();
        void morir();


};

/* otra forma de darle los valores al constructor
 NAVE::NAVE(int _x, int _y)
 {
     x = _x;
     y = _y;
     corazones = _corazones
 }

*/

void NAVE::pintar() //importante poner :: para entrar en la clase y definimos la funcion de la clase, tambien se puede definir en el cuerpo de la clase
{   gotoxy(x,y); printf("  %c",94); // definimos como se contruirá la nave , con los caracteres del codigo ascii
    gotoxy(x,y+1); printf(" %c%c%c",40,207,41);
    gotoxy(x,y+2); printf("%c%c %c%c",60,190,190,62);
}

void NAVE::borrar()
{
    gotoxy(x,y); printf("         ");
    gotoxy(x,y+1); printf("         ");
    gotoxy(x,y+2); printf("         ");
}

void NAVE::mover()
{
    if (kbhit())    //kbhit() retorna 0 = flase si ninguna teclas es pulsada, en una funcion de conio.h
        {
            char tecla = getch();   // la funcion getch de la libreria conio.h detecta la tecla pulsada y la guarda en la variable char
            borrar();
            if (tecla == IZQUIERDA && x > 3 ) x--;
            if (tecla == DERECHA && x+6 < 77) x++;
            if (tecla == ARRIBA && y > 4) y--;
            if (tecla == ABAJO && y+3 < 33) y++;
            pintar();
            pintarCorazones();
        }
}
void NAVE::pintarCorazones()
{
    gotoxy(50,2); printf("VIDAS %d",vidas);
    gotoxy(64,2); printf("Salud");
    gotoxy(77,2); printf("      ");
    for(int i = 0; i < corazones; i++)
    {
        gotoxy(70+i,2); printf("%c",206);
    }
}
void NAVE::morir()
{
    if(corazones==0){
        borrar();
        gotoxy(x,y); printf("   **   ");
        gotoxy(x,y); printf("  ****   ");
        gotoxy(x,y); printf("   **   ");
        Sleep(200);
        borrar();
        gotoxy(x,y); printf("  * ** *  ");
        gotoxy(x,y); printf("   ****   ");
        gotoxy(x,y); printf("  * ** *  ");
        Sleep(200);
        borrar();
        vidas--;
        corazones == 3;
        pintarCorazones();
        pintar();
    }
}

class Asteroide
{//creamos la clase asteroide,
    int x,y;
    public:
        Asteroide(int _x, int _y):x(_x),y(_y){}
        int X(){return x; }
        int Y(){return y; }
        void pintar();
        void mover();
        void choque(NAVE &GUMI); // la funcion choque nesecita como parametros una clase con la que chocaremos o una structura
        
        
};

void Asteroide::pintar(){
    gotoxy(x,y); printf("%c",184);
}

void Asteroide::mover(){
    gotoxy(x,y); printf(" ");
    y++ ;
    if ( y>32){ 
        x=rand()%71 + 4; //genera numeros seudo aleatorios y los guarda en x
        y=4;
    }
    pintar();
}

void Asteroide::choque(NAVE &GUMI){
    if ( x >= GUMI.X() && x < GUMI.X()+6 && y >= GUMI.Y() && y <= GUMI.Y()+2) //comprueba si la x e y de la nave es el mismo que el del asteroide
    {
        GUMI.impact();
        GUMI.borrar();
        GUMI.pintar();
        GUMI.pintarCorazones();
        x=rand()%71 + 4;
        y=4;

    }
}
class BALA
{
    int x,y;
    public:
        BALA(int _x, int _y): x(_x), y(_y){}
        int X(){return x;}
        int Y(){return y;}
        void mover();
        bool TocoLimite();
};

void BALA::mover(){
    gotoxy(x,y); printf(" ");
    y--;
    gotoxy(x,y); printf("*");

}

bool BALA::TocoLimite()
{
    if (y == 4) return true; 
    return false;
}

int main()// 
{
    int puntos = 0;
    bool game_over = false;
    
    OcultarCusor();
    
    NAVE GUMI(37,30,3,3);
    GUMI.pintar();
    GUMI.pintarCorazones();
    PintarLimites();
    
    
    list<Asteroide*> AS; // creamos las listas que funcionan como los arrays pero hay que utilizar punteros para ciertas operaciones 
    list<Asteroide*>::iterator itA; // el iterador va cambiando entre los elementos de la lista

    for (int i=0; i<5;i++) 
    {
        AS.push_back(new Asteroide(rand()%74 + 3, rand()%5 + 4)); // añadimos un asteroide a la lista con x e y random
    }
    
    list<BALA*> B; // creamos la lista bala
    list<BALA*>::iterator itB;
    
    while (!game_over)  //mientras game over sea false se ejecuta la rutina principal del juego 
    {
        gotoxy(4,2); printf("puntos %d",puntos);// imprimimos los puntos por pantalla
       

        if (kbhit)
        {
            char TeclaDisparar = getch(); // creamos la tecla disparar
            if (TeclaDisparar == 'a'){
                B.push_back(new BALA(GUMI.X()+2, GUMI.Y()-1)); //añadimos una bala a la lista con las coordenadas de la nave

            }
        }
        for (itB = B.begin(); itB != B.end(); itB++) // bucle para hacer que el iterador Bala se ejecute mientras hayan balas en la lista 
        {
            (*itB)->mover();// pasamos por referencia el iterador de bala y como hace referencia a la bala podemos utilizar la funcion mover con el operador "Flecha" ->

            if ( (*itB)->TocoLimite() ){
                gotoxy((*itB)->X(),(*itB)->Y()); printf(" ");// si toca los limites la bala se borra

                delete(*itB); // como se borra la bala tambien tenemos que borrar el espacio que tenia la bala en la lista, esto hace que la lista quedara sin un espacio y esto provocaria un fallo
                itB=B.erase(itB); //enlazamos de nuevo la lista con la funcion erase de de la libreria list
            }
        }

        for (itA = AS.begin(); itA != AS.end(); itA++ )// se ejecuta mientras hayan asteroides
        {
            (*itA)->mover();
            (*itA)->choque(GUMI);

        }

        for (itA = AS.begin(); itA != AS.end(); itA++)// se ejecuta mientras se creen asteroides porque el principio de la lista siempre sera diferente al final 
        {
            for (itB = B.begin(); itB != B.end(); itB++) // se ejecuta mientras se creen balas con la tecla a
            {
                if ((*itA)->X() == (*itB)->X() && ((*itA)->Y() +1 == (*itB)->Y() ) || (*itA)->Y() == (*itB)->Y() ) // si la posicion en x e y de las balas son las mismas que la de los asteroides o anterio
                {
                    gotoxy((*itB)->X(), (*itB)->Y() ); printf(" "); // borraria las balas
                    delete(*itB);
                    itB = B.erase(itB);// borramos la e hueco enterior y creamos y creamos uno nuevo

                    AS.push_back(new Asteroide(rand()%74 + 3, 4) );// añadimos un asteroide a la lista
                    gotoxy((*itA)->X(), (*itA)->Y() ); printf(" "); // borramos el asteroide que impacto con la bala
                    delete(*itA);
                    itA = AS.erase(itA);

                    puntos+=5; // al destruir un asteroide sumas puntos
                }
            }
            
        }
        if (GUMI.VID()==0) game_over=true; // si la funcion vida de la nave retorna 0 terminaria el juego
        GUMI.mover();
        GUMI.morir();

        Sleep(30);  // Sleep hace que el bucle se ejecutes menos veces para no sobrecargar la memoria
        
    }
    
    return 0;
}