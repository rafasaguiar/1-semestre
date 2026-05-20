// Faça um programa que leia 10 valores, um de cada vez, e apresente o maior deles ao final.

#include <iostream>
using namespace std;

int main () {
    int valor, maior;

    cout << "Informe um valor: ";
    cin >> valor;
    maior = valor;

    for (int i = 1; i <= 9; i++) { 
    cout << "Informe um valor: ";
    cin >> valor;

        if (valor > maior) {
            maior = valor;
        }
        
    }

    cout << "O maior valor e: " << maior << endl;

return 0;
}