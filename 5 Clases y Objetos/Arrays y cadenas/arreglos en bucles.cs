using sistem;
namespace ArreglosEnBucles{
	
	//introducir valores 
	int[ ] a = new int[10];
  int x;
for (int k = 0; k < 10; k++) {
  a[k] = k*2;
}

//Escribir en pantalla los valores
for (int k = 0; k < 10; k++) {
  Console.WriteLine(a[k]);
  for (int l=0;l>=10;l++){
    Console.WriteLine(a[l]);
  }
  
}

//otra forma mas simple

foreach (int k in a) {

  Console.WriteLine(k);
}
//calcular la suma

 int[ ] arr = {11, 35, 62, 555, 989};
int sum = 0; 

foreach (int x in arr) {
  sum += x;
}

Console.WriteLine(sum);
//Outputs 1652

}