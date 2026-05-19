// Faça um programa que calcule o mostre a média aritmética de n valores.

#include <iostream>
using namespace std;

int main () {
    int valores;
    float nota, media;
    float soma = 0;

    cout << "Quantas notas serao colocadas no sistema? ";
    cin >> valores;

    while (valores <= 0) {
        cout << "Digite um valor maior ou igual a 1: ";
        cin >> valores;
    }

    for (int i = 0; i < valores; i++) {
        cout << "Insira a nota: ";
        cin >> nota;
        soma = soma + nota;
    }

    media = soma / valores;

    cout << "A media sera: " << media;

return 0;
}