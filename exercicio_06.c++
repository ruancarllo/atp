#include <iostream>
using namespace std;

int main() {
  int digito_cpf;

  int primeiro_digito_validacao;
  int segundo_digito_validacao;

  int soma_passo_1;
  int resto_passo_1;

  int soma_passo_3;
  int resto_passo_3;

  bool cpf_eh_valido;

  int contador;
  
  soma_passo_1 = 0;
  soma_passo_3 = 0;
  contador = 0;

  cout << "Informe os 11 digitos do CPF: ";

  while (contador < 11) {
    cin >> digito_cpf;

    if (digito_cpf < 0 || digito_cpf > 9) {
      cout << "O digito informado eh invalido!" << endl;
      return 1;
    }

    if (contador == 9) {
      primeiro_digito_validacao = digito_cpf;
    }

    if (contador == 10) {
      segundo_digito_validacao = digito_cpf;
    }

    if (10 - contador >= 2) {
      soma_passo_1 = soma_passo_1 + (10 - contador) * digito_cpf;
    }

    if (11 - contador >= 2) {
      soma_passo_3 = soma_passo_3 + (11 - contador) * digito_cpf;
    }

    contador = contador + 1;
  }

  resto_passo_1 = soma_passo_1 % 11;

  if (resto_passo_1 < 2) {
    cpf_eh_valido = primeiro_digito_validacao == 0;
    primeiro_digito_validacao = 0;
  } else {
    cpf_eh_valido = primeiro_digito_validacao == 11 - resto_passo_1;
    primeiro_digito_validacao = 11 - resto_passo_1;
  }

  resto_passo_3 = soma_passo_3 % 11;

  if (resto_passo_3 < 2) {
    cpf_eh_valido = cpf_eh_valido && (segundo_digito_validacao == 0);
    segundo_digito_validacao = 0;
  } else {
    cpf_eh_valido = cpf_eh_valido && (segundo_digito_validacao == 11 - resto_passo_3);
    segundo_digito_validacao = 11 - resto_passo_3;
  }

  cout << "A soma obtida no Passo 1 eh " << soma_passo_1 << endl;
  cout << "O primeiro digito de validacao eh " << primeiro_digito_validacao << endl;
  cout << "A soma obtida no Passo 3 eh " << soma_passo_3 << endl;
  cout << "O segundo digito de validacao eh " << segundo_digito_validacao << endl;

  if (cpf_eh_valido) {
    cout << "S" << endl;
  } else {
    cout << "N" << endl;
  }

  return 0;
}