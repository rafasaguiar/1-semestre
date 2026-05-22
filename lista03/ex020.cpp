// Escreva um programa que leia dois números inteiros e faça a multiplicação de um número pelo outro
// sem utilizar o operador de multiplicação (*). Imprimir na tela o valor encontrado.

#include <iostream>
using namespace std;

int main () {

    int numeroA, numeroB;
    int soma = 0;

    cout << "Insira dois numeros inteiros para realizar a multiplicacao entre eles:" << endl;
    cout << "Insira o primeiro numero: ";
    cin >> numeroA;
    cout << "Insira o segundo numero: ";
    cin >> numeroB;
   
    if (numeroA > 0 && numeroB > 0) {
        for (int i = 1; i <= numeroB; i++) {
            soma = soma + numeroA;
        }
    }

    if (numeroA < 0 && numeroB > 0) {
        numeroA = -1 * numeroA;

        for (int i = 1; i <= numeroB; i++) {
            soma = soma + numeroA;
        }
        soma = -1 * soma;
    }

    if (numeroA > 0 && numeroB < 0) {
        numeroB = -1 * numeroB;

        for (int i = 1; i <= numeroB; i++) {
            soma = soma + numeroA;
        }
        soma = -1 * soma;
    }

    if (numeroA < 0 && numeroB < 0) {
        numeroA = -1 * numeroA;
        numeroB = -1 * numeroB;
        for (int i = 1; i <= numeroB; i++) {
            soma = soma + numeroA;
        }
    }


    cout << "Resultado: " << soma;

return 0;
}