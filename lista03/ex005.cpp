// Escreva um programa que lê uma sequência de números inteiros e imprime qual o maior e qual o
// menor valor dessa seqüência. A seqüência termina com o número 0 (zero).

#include <iostream>
using namespace std;

int main () {
    int valor, maior, menor;

        cout << "Informe um valor: ";
        cin >> valor;
        maior = valor;
        menor = valor;

        while (valor != 0) {
            cout << "Informe um valor: ";
            cin >> valor;
            if (valor != 0) {
                if (valor > maior) {
                    maior = valor;
                }
                if (valor < menor) {
                    menor = valor;
                }
            }
        }

    cout << "O maior numero e: " << maior << endl;
    cout << "O menor numero e: " << menor << endl;
return 0;
}