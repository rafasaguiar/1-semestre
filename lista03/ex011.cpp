#include <iostream>
using namespace std;

// Escreva um programa que imprime a soma de todos os números inteiros entre A e B (incluindo A e B),
// onde A e B são fornecidos pelo usuário.

int main () {
    int valorA, valorB;
    int soma = 0;

    cout << "Insira dois valores: " << endl;
    cout << "Valor A: ";
    cin >> valorA;
    cout << "Valor B: ";
    cin >> valorB;

    if (valorB >= valorA) {

        for (int i = valorA; i <= valorB; i++) {
            soma = soma + i;
        }
    }

    else {

        for (int i = valorB; i <= valorA; i++) {
            soma = soma + i;
        }
    }

    cout << "A soma entre os inteiros entre A e B e igual a: " << soma;

return 0;
}