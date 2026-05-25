// Escreva um programa que solicita 50 valores inteiros ao usuário, armazena esses valores em um arranjo
// chamado vet1. Depois, copia o conteúdo desse arranjo para um segundo arranjo chamado vet2. O
// programa deve imprimir os dois arranjos na tela.

#include <iostream>
using namespace std;

int main () {


    int vet1[50], vet2[50];

    for (int i = 0; i < 50; i++) {
        cout << "Digite um valor inteiro: ";
        cin >> vet1[i];
    }

    for (int i = 0; i < 50; i++) {
        vet2[i] = vet1[i];
    }

    for (int i = 0; i < 50; i++) {
        cout << vet1[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 50; i++) {
        cout << vet2[i] << " ";
    }

return 0;
}