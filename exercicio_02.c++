#include <iostream>
using namespace std;

int main() {
  int algarismo_binario;
  int potencia_de_2;
  int contador;
  int valor;

  potencia_de_2 = 128;
  contador = 0;
  valor = 0;

  cout << "Informe uma sequencia de 8 algarismos binarios: ";

  while (contador < 8) {
    cin >> algarismo_binario;

    if (algarismo_binario != 0 && algarismo_binario != 1) {
      cout << "O algarismo nao eh binario!" << endl;
      return 1;
    }

    valor = valor + potencia_de_2 * algarismo_binario;
    potencia_de_2 = potencia_de_2 / 2;
    contador = contador + 1;    
  }

  cout << "O valor correspondente em base decimal eh: " << valor << endl;
  
  return 0;
}