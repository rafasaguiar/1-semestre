#include <iostream>
using namespace std;

// Faça um programa que solicite dois números inteiros positivos e exiba os múltiplos de 7 existentes
// entre estes números. Faça uma versão com cada um dos laços: for, while e do-while.

int main () {
    int numeroA, numeroB;
    int contador = 1;

    cout << "Digite dois numeros inteiros positivos: " << endl;
    cout << "Numero: ";
    cin >> numeroA;

    while (numeroA < 0) {
        cout << "Digite um valor positivo: ";
        cin >> numeroA;
    }

    cout << "Numero: ";
    cin >> numeroB;

    while (numeroA < 0) {
        cout << "Digite um valor positivo: ";
        cin >> numeroB;
    }

    if (numeroB > numeroA) {
        contador = numeroA;
        while (contador <= numeroB) {
            if (contador % 7 == 0) {
                cout << contador << " ";
            }
            contador++;
        }
    }

    else {
        contador = numeroB;
        while (contador <= numeroA) {
            if (contador % 7 == 0) {
                cout << contador << " ";
            }
            contador++;
        }
    }

return 0;
}