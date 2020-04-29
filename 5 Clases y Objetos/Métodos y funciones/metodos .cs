using sistem;
namespace std{
	/*
	<return type> name(type1 par1, type2 par2, … , typeN parN)
	*/

//ejemplo
int Sqr(int x)
{
  int result = x*x;
  return result;
}

//Outputs "Hello"


static void SayHi()
{
  Console.WriteLine("Hello");
}

static void Main(string[] args)
{
  Sqr(5);
  SayHi();
  Sayhi();
}
}