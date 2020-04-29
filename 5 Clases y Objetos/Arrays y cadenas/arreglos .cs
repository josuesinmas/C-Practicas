using sistem;
namespace arreglo{

//devlaramos e instanciamos
int[ ] myArray;

int[ ] myArray = new int[5];
myArray[0] = 23;
myArray[4] = 64;

// otra forma

string[ ] nombres = new string[3] {"John", "Mary", "Jessica"};

double[ ] precios = new double[4] {3.6, 9.8, 6.4, 5.9};

//la forma mas utilizada

string[ ] names = {"John", "Mary", "Jessica"};


double[ ] precio = {3.6, 9.8, 6.4, 5.9};
}



Console.WriteLine(names[2]);

//Outputs Jessica



Console.WriteLine(precio[3]);

//Outputs 5.9

}