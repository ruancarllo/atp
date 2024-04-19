#include <iostream>
using namespace std;

int main() {
  int dividendo;
  int divisor;
  int quociente;
  int resto;
  
  cout << "Informe dois numeros inteiros positivos (dividendo e divisor): ";
  cin >> dividendo >> divisor;

  if (dividendo <= 0 || divisor <= 0) {
    cout << "Algum valor fornecido eh invalido!" << endl;
    return 1;
  }

  resto = dividendo;
  quociente = 0;

  while (resto >= divisor) {
    resto = resto - divisor;
    quociente = quociente + 1;
  }

  cout << "Quociente = " << quociente << ", Resto = " << resto << endl;
  
  return 0;
}