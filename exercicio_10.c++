#include <iostream>
using namespace std;

int main() {
  char fornecedor;
  char tipo;
  char produto;
  float peso_em_gramas;
  float preco_por_quilo;

  int quantidade_itens;
  int contador_itens;
  float peso_total_em_gramas;
  float maior_preco_por_quilo;
  int quantidade_produtos_organicos;
  float soma_precos_cenoura_usual;
  int quantidade_cenouras_usuais;
  float menor_preco_produto_usual;
  char produto_usual_menor_preco;
  float total_gasto_horta_magica;

  cout << "Informe quantos itens pretende processar: ";
  cin >> quantidade_itens;
  cout << endl;

  if (quantidade_itens <= 0) {
    cout << "O valor informado eh invalido!" << endl;
    return 1;
  }

  contador_itens = 1;
  peso_total_em_gramas = 0;
  maior_preco_por_quilo = -1000000000;
  quantidade_produtos_organicos = 0;
  quantidade_cenouras_usuais = 0;
  menor_preco_produto_usual = +1000000000;

  while (contador_itens <= quantidade_itens) {
    cout << "Informe o Item " << contador_itens;
    
    if (contador_itens != quantidade_itens) {
      cout << " (depois, mais " << quantidade_itens - contador_itens << ")";
    } else {
      cout << " (ultimo)";
    }

    cout << " - fornecedor: [H para Horta Magica, M para Momento da Colheira, N para Natureza Ecologica]: ";
    cin >> fornecedor;

    if (fornecedor != 'H' && fornecedor != 'M' && fornecedor != 'N') {
      cout << "Opcao invalida!" << endl;
      return 1;
    }

    cout << "Informe se eh organico: [O para organico, U para usual]: ";
    cin >> tipo;

    if (tipo != 'O' && tipo != 'U') {
      cout << "Opcao invalida!" << endl;
      return 1;
    }

    cout << "Informe o produto: [A para abobrinha, B para brocolis, C para Cenoura]: ";
    cin >> produto;

    if (produto != 'A' && produto != 'B' && produto != 'C') {
      cout << "Opcao invalida!" << endl;
      return 1;
    }

    cout << "Informe a quantidade adquirida (em gramas): ";
    cin >> peso_em_gramas;

    if (peso_em_gramas < 0) {
      cout << "O valor informado eh invalido!" << endl;
      return 1;
    }

    cout << "Informe o preco por quilo: ";
    cin >> preco_por_quilo;

    if (preco_por_quilo < 0) {
      cout << "O valor informado eh invalido!" << endl;
      return 1;
    }

    if (fornecedor == 'H') {
      total_gasto_horta_magica = total_gasto_horta_magica + preco_por_quilo * peso_em_gramas / 1000.0;
    }

    if (tipo == 'U' && preco_por_quilo < menor_preco_produto_usual) {
      menor_preco_produto_usual = preco_por_quilo;
      produto_usual_menor_preco = produto;
    }

    if (tipo == 'O') {
      quantidade_produtos_organicos = quantidade_produtos_organicos + 1;
    }

    if (tipo == 'U' && produto == 'C') {
      soma_precos_cenoura_usual = soma_precos_cenoura_usual + preco_por_quilo;
      quantidade_cenouras_usuais = quantidade_cenouras_usuais + 1;
    }

    if (preco_por_quilo > maior_preco_por_quilo) {
      maior_preco_por_quilo = preco_por_quilo;
    }

    contador_itens = contador_itens + 1;
    peso_total_em_gramas = peso_total_em_gramas + peso_em_gramas;

    cout << endl;
  }
  
  cout << "a) O peso total de todos os produtos adquiridos eh de " << peso_total_em_gramas / 1000.0 << " quilos" << endl;
  cout << "b) O preco por quilo do produto mais caro eh de " << maior_preco_por_quilo << " reais" << endl;
  cout << "c) A quantidade total de produtos organicos adquiridos eh " << quantidade_produtos_organicos << endl;
  cout << "d) A media do preco por quilo da cenoura nao organica eh de " << soma_precos_cenoura_usual / quantidade_cenouras_usuais << " reais" << endl;
  cout << "e) O produto usual de menor preco eh ";

  switch (produto_usual_menor_preco) {
    case 'A':
      cout << "a abobrinha" << endl;
      break;
    case 'B':
      cout << "o brocolis" << endl;
      break;
    case 'C':
      cout << "a cenoura" << endl;
      break;
  }

  cout << "f) O total gasto na Horta Magica foi de " << total_gasto_horta_magica << " reais" << endl;

  return 0;
}