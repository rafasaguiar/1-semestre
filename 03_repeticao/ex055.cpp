#include <iostream>
using namespace std;

// Encontrar números primos é uma tarefa difícil. Faça um programa que gera uma lista dos números
// primos existentes entre 1 e um número inteiro informado pelo usuário.
// PRIMO = NUMERO QUE SO DIVIDE POR 1 E POR ELE MESMO
// ex.: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41...

int main () {
    int numero;
    int primo = 0;
    int divisor = 0;

    cout << "Insira um numero inteiro e positivo e veja todos os primos antecessores a ele: ";
    cin >> numero;

    while (numero < 0) {
        cout << "Digite um numero inteiro e positivo: ";
        cin >> numero;
    }

    for (int contador = 2; contador <= numero; contador++) {
        divisor = 0;

        for (int i = 1; i <= contador; i++) {
            if (contador % i == 0) {
            divisor++;
            }
        }
        if (divisor == 2) {
            cout << contador << " ";
        }
    }

return 0;
}
