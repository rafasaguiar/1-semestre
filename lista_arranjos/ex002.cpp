// Escreva um programa que recebe um vetor de inteiros positivos e substitui seus elementos de valor
// ímpar por -1 e os pares por +1. Em seguida, imprime o vetor alterado.

#include <iostream>
using namespace std;

int main () {
    int soma = 0;
    int tamanho;

    cout << "Digite o tamanho do vetor de inteiros: " << endl;
    cin >> tamanho;

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        cout << "\nDigite o valor para a posicao " << i + 1 << ": ";
        cin >> vetor[i];

        if (vetor[i] % 2 == 0) {
            vetor[i] = 1;
        }

        else {
            vetor[i] = -1;
        }
    }

    for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << " ";
    }

    cout << endl;

return 0;
}