// Faça um programa que calcule o mostre a média aritmética de n valores.

#include <iostream>
using namespace std;

int main () {
    int valores;
    float nota, media;
    int contador = 0;
    float soma = 0;

    cout << "Quantas notas serao colocadas no sistema? ";
    cin >> valores;

    while (contador < valores) {
        cout << "Insira a nota: ";
        cin >> nota;
        soma = soma + nota;
        contador++;
    }

    media = soma / valores;

    cout << "A media sera: " << media;

return 0;
}