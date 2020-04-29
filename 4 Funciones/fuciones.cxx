#include <iostream>
using namespace std;

//Function declaration
int Print1(int x,int y,int z,int s);
int funcionAtacar();
float valocida();

//Function definition
void print1(int s=5 ,int x=2,int y) {
  cout << "Hi there!";
  s=x+y;
  cout << "Hi there!"<<s;
}
//arrais como parametros
void Array(int arr[5,3,6],int size){
  for (int x=0;x<size;x++){
    cout<<arr[x,];
  }

}

int main() {
  Print1(12,21,3,0);
  print1(0,1,9);
  return 0;
}