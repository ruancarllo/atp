#include <iostream>
using namespace std;

int main() {
  int elemento_anterior;
  int elemento_atual;

  int tamanho_sequencia;
  int contador_sequencia;
  bool nao_eh_scendente;

  cout << "Informe o tamanho da sequencia: ";
  cin >> tamanho_sequencia;

  if (tamanho_sequencia < 0) {
    cout << "O valor informado eh invalido!" << endl;
    return 1;
  }

  contador_sequencia = 0;

  while (contador_sequencia < tamanho_sequencia) {
    cout << "Informe o proximo elemento: ";
    cin >> elemento_atual;

    if (contador_sequencia != 0 && elemento_atual <= elemento_anterior) {
      nao_eh_scendente = true;
    }
    
    elemento_anterior = elemento_atual;
    contador_sequencia = contador_sequencia + 1;
  }

  cout << "A sequencia";

  if (nao_eh_scendente) {
    cout << " nao";
  }

  cout << " eh ascendente." << endl;

  return 0;
}