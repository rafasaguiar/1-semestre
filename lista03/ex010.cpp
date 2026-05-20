#include <iostream>
using namespace std;

// Faça um programa que leia 10 valores, um de cada vez, e calcule a média, mostrando o resultado ao final.

int main () {
    float valor, media;
    float soma = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Insira um valor: ";
        cin >> valor;
        soma = soma + valor;
    }

    media = soma / 10;

    cout << "A media sera: " << media;

return 0;
}