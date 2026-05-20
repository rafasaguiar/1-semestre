#include <iostream>
using namespace std;

// Faça um programa que leia 10 valores, um de cada vez, e conte quantos são positivos, mostrando o
// resultado da contagem ao final.

int main () {

    int valor;
    int positivo = 0;
    int negativo = 0;
    int nulo = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Insira um valor: ";
        cin >> valor;
        
            if (valor > 0) {
                positivo++;
            }

            if (valor < 0) {
                negativo++;
            }

            if (valor == 0) {
                nulo++;
            }
    }
    
    cout << "Sao " << positivo << " positivos, " << negativo << " negativos e " << nulo << " nulos." << endl;
    
return 0;
}