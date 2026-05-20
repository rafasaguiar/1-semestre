// Escreva um programa em linguagem C que determina se um valor informado pelo usuário é um
// número primo ou não.

#include <iostream>
using namespace std;

int main () {
    int valor;
    int divisores = 0;

    cout << "Digite um valor inteiro positivo e confira se e primo ou nao: ";
    cin >> valor;

    while (valor <= 0) {
        cout << "Digite um valor inteiro positivo igual ou maior a 1: ";
        cin >> valor;
    }

    for (int i = 1; i <= valor; i++) {
        if (valor % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2 && valor != 1) {
        cout << "E primo";
    }
    else {
        cout << "Nao e primo";
    }
return 0;
}