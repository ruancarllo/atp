#include <iostream>
using namespace std;

int main() {
  int termo_1;
  int termo_2;
  float termo_3;
  int termo_4;

  int contador;

  termo_1 = 0;
  termo_2 = 1;
  termo_3 = 100.0;
  termo_4 = 15;

  contador = 0;

  while (contador < 5) {
    cout << termo_1 << endl;
    cout << termo_2 << endl;
    cout << termo_3 << endl;
    cout << termo_4 << endl;

    termo_1 = termo_1 + 2;
    termo_2 = termo_2 + 30;
    termo_3 = termo_3 / 2;
    termo_4 = termo_4 - 5;

    contador = contador + 1;
  }

  return 0;
}