// Faça um programa que calcule o número médio de alunos por turma. Para isto, peça a quantidade
// de turmas e a quantidade de alunos para cada turma. As turmas não podem ter mais de 40 alunos.

#include <iostream>
using namespace std;

int main () {
    int turmas, alunos;
    float media;
    float total = 0;
    int contador = 0;

    cout << "Sao quantas turmas? ";
    cin >> turmas;

    while (turmas <= 0) {
        cout << "Sao quantas turmas? Digite um valor igual ou maior a 1: ";
        cin >> turmas;
    }

    for (int i = 0; i < turmas; i++) {
        cout << "Quantos alunos na turma? ";
        cin >> alunos;

        while (alunos < 0 || alunos > 40) {
            cout << "A turma nao pode ter mais que 40 alunos nem menos que 1 aluno. Digite novamente a quantidade: ";
            cin >> alunos;
        }
        total = total + alunos;
    }

    media = total / turmas;


    cout << "O numero medio de alunos por turma e igual a: " << media << endl;

return 0;
}