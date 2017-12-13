#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)

{
  int num1;
  int num2;
  int resultado;
  cout << "Ingrese el primer numero\n";
  cin >> num1;
  
  cout << "Ingrese el segundo numero\n";
  cin >> num2;
  
  resultado = num1 + num2;
  cout << resultado << "\n";
  return 0;
}
