// Escreva um programa que imprime todos os números primos entre 1 e n, onde n é fornecido pelo
// usuário.

#include <iostream>
using namespace std;

int main () {
    int valor;
    int divisores;

    cout << "Insira um valor inteiro e positivo e veja todos os primos antecessores a ele: ";
    cin >> valor;

    while (valor <= 0) {
        cout << "O valor precisa ser inteiro e positivo, insira novamente: ";
        cin >> valor;
    }

    for (int numero = 2; numero <= valor; numero++) {
        
        divisores = 0;

        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            cout << numero << " ";
        }
    }
return 0;
}