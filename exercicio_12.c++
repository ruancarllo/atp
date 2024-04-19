#include <iostream>
using namespace std;

int main() {
  int primeiro_componente;
  int segundo_componente;

  int quantidade_pares;
  int contador_pares;
  bool atende_criterio;

  cout << "Informe quantos pares ha na relacao: ";
  cin >> quantidade_pares;

  if (quantidade_pares < 0) {
    cout << "O valor informado eh invalido!" << endl;
    return 1;
  }

  contador_pares = 0;
  atende_criterio = true;

  while (contador_pares < quantidade_pares) {
    cout << "Informe o 1o componente do par: ";
    cin >> primeiro_componente;

    cout << "Informe o 2o componente do par: ";
    cin >> segundo_componente;

    if (segundo_componente != primeiro_componente + 1) {
      atende_criterio = false;
    }

    contador_pares = contador_pares + 1;
  }
  
  cout << endl << "A relacao";

  if (atende_criterio == false) {
    cout << " nao";
  }

  cout << " atende ao criterio de que todos os elementos sao da forma (n, n+1)" << endl;
  
  return 0;
}