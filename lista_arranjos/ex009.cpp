// Escreva um programa que recebe 20 valores inteiros positivos e os armazena em um vetor. Em seguida
// verifica se todos os elementos do vetor são pares. Se pelo menos um elemento for ímpar, o programa
// deve imprimir FALSO. Caso contrário, deve retornar VERDADEIRO.

#include <iostream>
using namespace std;

int main () {
    int vetorA[20];
    int impares = 0;

    for (int i = 0; i < 20; i++) {
        cout << "Digite um valor inteiro para preencher A: ";
        cin >> vetorA[i];

            if (vetorA[i] % 2 != 0) {
                impares++;
            }
    }

    if (impares == 0) {
        cout << "VERDADEIRO";
    }
    else {
        cout << "FALSO";
    }

return 0;
}