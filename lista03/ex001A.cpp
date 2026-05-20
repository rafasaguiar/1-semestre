#include <iostream>
using namespace std;

// Faça um programa que solicite dois números inteiros positivos e exiba os múltiplos de 7 existentes
// entre estes números. Faça uma versão com cada um dos laços: for, while e do-while.

int main () {
    int numeroA, numeroB;

    cout << "Digite dois numeros inteiros positivos: " << endl;
    cout << "Numero: ";
    cin >> numeroA;

    while (numeroA < 0) {
        cout << "Digite um valor positivo: ";
        cin >> numeroA;
    }

    cout << "Numero: ";
    cin >> numeroB;

    while (numeroB < 0) {
        cout << "Digite um valor positivo: ";
        cin >> numeroB;
    }

    if (numeroB > numeroA) {
        for (int i = numeroA; i <= numeroB; i++) {
            if (i % 7 == 0) {
                cout << i << " ";
            }
        }
    }

    else {
        for (int i = numeroB; i <= numeroA; i++) {
            if (i % 7 == 0) {
                cout << i << " ";
            }
        }
    }

return 0;
}