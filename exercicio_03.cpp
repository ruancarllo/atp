#include <iostream>
using namespace std;

int main() {
  int primeiro_numero;
  int segundo_numero;
  int dividendo;
  int divisor;
  int resto;

  cout << "Informe dois numeros inteiros positivos: ";
  cin >> primeiro_numero >> segundo_numero;

  if (primeiro_numero <= 0 || segundo_numero <= 0) {
    cout << "Algum valor fornecido eh invalido!" << endl;
    return 1;
  }

  dividendo = primeiro_numero;
  divisor = segundo_numero;

  while (true) {
    resto = dividendo % divisor;

    if (resto == 0) {
      break;
    }

    dividendo = divisor;
    divisor = resto;
  }

  cout << "O M.D.C. de " << primeiro_numero << " e " << segundo_numero << " eh " << divisor << endl;
  
  return 0;
}