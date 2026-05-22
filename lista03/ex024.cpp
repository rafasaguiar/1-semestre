#include <iostream>
using namespace std;

int main () {
    int passou = 0, recuperacao = 0, perdeu = 0;
    float somageral = 0;
    float nota, mediageral, percentualpassou, percentualrecuperacao, percentualperdeu;

    for (int i = 1; i <= 50; i++) {
        cout << "Digite a nota: ";
        cin >> nota;

            while (nota < 0) {
                cout << "A nota precisa ser igual ou maior a zero: ";
                cin >> nota;        
            }

            if (nota >= 7) {
                passou++;
            }

            if (nota >= 4 && nota < 7) {
                recuperacao++;
            }

            if (nota < 4) {
                perdeu++;
            }
       
        somageral = somageral + nota;
        }

    mediageral = somageral / 50.00;
    percentualpassou = ((float)passou / 50.00) * 100.00;
    percentualrecuperacao = ((float)recuperacao / 50.00) * 100.00;
    percentualperdeu = ((float)perdeu/50.00) * 100.00;

    cout << "=== RELATORIO FINAL DAS NOTAS DA TURMA ===" << endl;
    cout << endl;
    cout << "Media geral da turma: ";
    cout << mediageral << endl;
    cout << endl;
    cout << "Quantidade de alunos com notas maiores ou iguais a 7: ";
    cout << passou << endl;
    cout << "Percentual de alunos com notas maiores ou iguais a 7: ";
    cout << percentualpassou << "%" << endl;
    cout << endl;
    cout << "Quantidade de alunos com notas maiores ou iguais a 4 e menores que 7: ";
    cout << recuperacao << endl;
    cout << "Percentual de alunos com notas maiores ou iguais a 4 e menores que 7: ";
    cout << percentualrecuperacao << "%" << endl;
    cout << endl;
    cout << "Quantidade de alunos com notas menores que 4: ";
    cout << perdeu << endl;
    cout << "Percentual de alunos com notas menores que 4: ";
    cout << percentualperdeu << "%" << endl;

return 0;
}