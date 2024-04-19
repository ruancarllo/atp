#include <iostream>
using namespace std;

int main() {
  int contador;

  contador = 1;

  while (contador <= 100) {
    if (contador % (3 * 5) == 0) {
      cout << "FizzBuzz" << endl;
    } else if (contador % 3 == 0) {
      cout << "Fizz" << endl;
    } else if (contador % 5 == 0) {
      cout << "Buzz" << endl;
    } else {
      cout << contador << endl;
    }

    contador = contador + 1;
  }

  return 0;
}