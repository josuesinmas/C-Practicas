#include "iostream"
#include "string"

using namespace std;

    struct estructura
    {
        float ejeX = 3;
        float ejeY = 3;
        float Result = ejeY * ejeX;
        float Dimencion[3]={ejeX,ejeY};
        string nombre = "Muro3x3";
        /* data */
    };
     int main()
     {
         int x;
         estructura M1;
         cout<< M1.Result;
         cin>>x;
     }