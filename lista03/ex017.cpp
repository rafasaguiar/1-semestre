// Escreva um programa que leia dois números inteiros e faça a multiplicação de um número pelo outro
// sem utilizar o operador de multiplicação (*). Imprimir na tela o valor encontrado.
// Obs: Lembrar que uma multiplicação pode ser definida por uma sucessão de somas.

#include <iostream>
using namespace std;

int main () {
    int operadorA, operadorB;
    int soma = 0;

    cout << "Insira os operadores da multiplicacao: " << endl;
    cout << "Operador A: ";
    cin >> operadorA;
    cout << "Operador B: ";
    cin >> operadorB;

    if (operadorA >= 0 && operadorB >= 0) {

        for (int i = 1; i <= operadorB; i++) {
            soma = soma + operadorA;
        }
    }

    if (operadorA < 0 && operadorB < 0) {
        operadorA = -1 * operadorA;
        operadorB = -1 * operadorB;

        for (int i = 1; i <= operadorB; i++) {
            soma = soma + operadorA;
        }
    }

    if (operadorA > 0 && operadorB < 0) {
        operadorB = -1 * operadorB;
        
        for (int i = 1; i <= operadorB; i++) {
            soma = soma + operadorA;
        }
        soma = -1 * soma;       
    }

    if (operadorA < 0 && operadorB > 0) {
        operadorA = -1 * operadorA;
        
        for (int i = 1; i <= operadorB; i++) {
            soma = soma + operadorA;
        }
        soma = -1 * soma;       
    }

    cout << "Resultado: " << soma << endl;

return 0;
}