#include <iostream>
using namespace std;

int main() {
  int limite_inferior;
  int limite_superior;
  int proximo_impar;

  cout << "Informe o limite inferior: ";
  cin >> limite_inferior;

  cout << "Informe o limite superior: ";
  cin >> limite_superior;

  if  (limite_inferior > limite_superior) {
    cout << "Erro: o segundo numero deve ser maior que o primeiro!" << endl;
    return 1;
  }

  if (limite_inferior % 2 == 0) {
    proximo_impar = limite_inferior + 1;
  } else {
    proximo_impar = limite_inferior;
  }

  while (proximo_impar < limite_superior) {
    cout << proximo_impar << endl;
    proximo_impar = proximo_impar + 2;
  }

  if (limite_superior % 2 != 0) {
    cout << proximo_impar << endl;
  }

  return 0;
}   