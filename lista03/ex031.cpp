// Professores preocupados com o número de faltas de seus alunos resolveram pedir para que esses
// alunos escrevessem um programa para calcular a média de faltas dos alunos de uma determinada
// turma. Imagine que você é um aluno dessa turma e tem como tarefa escrever tal programa. Esse
// programa deve ler a quantidade de faltas dos alunos dessa turma (permitir a leitura enquanto for
// digitado um número positivo para a quantidade de faltas). Ao final imprimir a quantidade média de
// faltas e o número de alunos que participaram dessa pesquisa.

#include <iostream>
using namespace std;

int main () {
    int faltas;
    int somafaltas = 0, alunos = 0;
    float mediafaltas;

    do {
        cout << "Qual o numero de faltas? ";
        cin >> faltas;
            if (faltas < 0) {
                break;
            }
        somafaltas = somafaltas + faltas;
        alunos++;
    } while (faltas >= 0);

    if (alunos > 0) {
    mediafaltas = (float)somafaltas/(float)alunos;
    cout << "Media de faltas por aluno: " << mediafaltas << endl;
    }

    else {
        cout << "Sem dados para contabilizacao." << endl;
    }

    cout << "Numero de alunos participantes: " << alunos << endl;
return 0;
}