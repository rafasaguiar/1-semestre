// Escreva um programa que leia n números inteiros positivos fornecidos e imprima na tela uma
// mensagem informando se o número é ou não perfeito.
// Obs.: Número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é igual ao número.
// 6 = 1 + 2 + 3

#include <iostream>
using namespace std;

int main () {

    int numero;
    int divisores = 0;

     cout << "Informe um numero e veja se ele e perfeito ou nao (0 para sair): ";
     cin >> numero;

    while (numero != 0) {


        int somadivisores = 0;

        for (int i = 1; i < numero; i++) {

            if (numero % i == 0) {
            somadivisores = somadivisores + i;
            }
        }

    if (somadivisores == numero) {
        cout << "\nPerfeito!" << endl;
    }

    else {
        cout << "\nNao e perfeito!" << endl;
    }

     cout << "Informe outro numero e veja se ele e perfeito ou nao (0 para sair): ";
    cin >> numero;

    }

return 0;    
}