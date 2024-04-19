#include <iostream>
using namespace std;

int main() {
  string registro_aluno;
  float carga_extensao;
  float carga_pesquisa;

  int quantidade_itens;
  int contador_itens;
  string registros_alunos_completaram;
  float soma_carga_extensao;
  int quantidade_alunos_sem_extensao;

  cout << "Informe quantos itens pretende informar: ";
  cin >> quantidade_itens;
  cout << endl;

  if (quantidade_itens < 0) {
    cout << "O valor informado eh invalido!" << endl;
    return 1;
  }

  contador_itens = 1;
  registros_alunos_completaram = "";
  soma_carga_extensao = 0;
  quantidade_alunos_sem_extensao = 0;

  while (contador_itens <= quantidade_itens) {
    cout << "Informe os dados do aluno " << contador_itens;

    if (contador_itens != quantidade_itens) {
      cout << " (depois, mais " << quantidade_itens - contador_itens << ")";
    } else {
      cout << " (utlimo)";
    }

    cout << " - RA: ";
    cin >> registro_aluno;

    cout << "Informe a CH de Extensao: ";
    cin >> carga_extensao;

    cout << "Informe a CH de Pesquisa: ";
    cin >> carga_pesquisa;

    if (carga_extensao >= 180) {
      if (registros_alunos_completaram == "") {
        registros_alunos_completaram = registro_aluno;
      } else {
        registros_alunos_completaram = registros_alunos_completaram + ", " + registro_aluno;
      }
    }

    if (carga_extensao == 0) {
      quantidade_alunos_sem_extensao = quantidade_alunos_sem_extensao + 1;
    }

    soma_carga_extensao = soma_carga_extensao + carga_extensao;
    contador_itens = contador_itens + 1;

    cout << endl;
  }

  cout << "a) Os RA dos alunos que ja completaram 180 horas de AC sao: " << registros_alunos_completaram << endl;
  cout << "b) A media de AC em extensao eh de " << 1.0 * soma_carga_extensao / quantidade_itens << " horas" << endl;
  cout << "c) A quantidade de alunos que nao fizeram atividades de extensao eh " << quantidade_alunos_sem_extensao << endl;

  return 0;
}