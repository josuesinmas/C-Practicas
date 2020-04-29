using sistem;
namespace clases{
class Person {
  int age;
  string name;
  public void SayHi() {
    Console.WriteLine("Hi");
  }
  public string saludar(string n){
    n=name;
    console.WriteLine("hola ma llamo",n);
    return n;
  }
  private void sumar(int x, int y){
    int resultado =x+y;
    console.WriteLine(resultado);
  }
}

static void Main(string[] args)
{
  Person p1 = new Person();
  p1.SayHi();
  p1.saludar("alex");
  p1.sumar(432,123123);
}
//Outputs "Hi"
}