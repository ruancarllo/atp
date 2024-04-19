#include <iostream>
using namespace std;

int main() {
  int primeiro_numero;
  int segundo_numero;
  int valor;

  cout << "Informe dois numeros inteiros positivos: ";
  cin >> primeiro_numero >> segundo_numero;

  if (primeiro_numero <= 0 || segundo_numero <= 0) {
    cout << "Algum valor fornecido eh invalido!" << endl;
    return 1;
  }

  if (primeiro_numero % 2 == 0) {
    valor = 0;
  } else {
    valor = segundo_numero;
  }

  while (primeiro_numero != 1) {
    primeiro_numero = primeiro_numero / 2;
    segundo_numero = segundo_numero + segundo_numero;
    
    if (primeiro_numero % 2 != 0) {
      valor = valor + segundo_numero;
    }
  }

  cout << "O resultado da multiplicacao eh " << valor << endl;
  
  return 0;
}