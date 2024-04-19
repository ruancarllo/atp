#include <iostream>
using namespace std;

int main() {
  int numero_inteiro;
  int soma_impares;
  int contador;

  cout << "Informe um numero inteiro positivo: ";
  cin >> numero_inteiro;

  if (numero_inteiro <= 0) {
    cout << "O valor informado eh invalido!" << endl;
    return 1;
  }

  soma_impares = 0;
  contador = 0;

  while (soma_impares < numero_inteiro) {
    soma_impares = soma_impares + 2 * contador + 1;
    contador = contador + 1;
  }

  cout << "A raiz quadrada inteira (aproximada para cima) de " << numero_inteiro << " eh " << contador << endl;
  
  return 0;
}