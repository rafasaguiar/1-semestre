// Faça um programa que calcule o valor total investido por um colecionador em sua coleção de CDs e
// o valor médio gasto em cada um deles. O usuário deverá informar a quantidade de CDs e o valor
// pago em cada um.

#include <iostream>
using namespace std;

int main () {
    int cds;
    float valorcd;
    double media;
    float total = 0;

    cout << "Sao quantos CDs no total? ";
    cin >> cds;

    while (cds <= 0) {
        cout << "Sao quantos CDs no total? Digite um valor maior ou igual a 1: ";
        cin >> cds;  
    }

    for (int i = 0; i < cds; i++) {
        cout << "Digite o valor do CD: ";
        cin >> valorcd;

        while (valorcd < 0) {
            cout << "Valor invalido, digite algo maior que 0 reais: ";
            cin >> valorcd;
        }

        total = total + valorcd;
    }

    media = total / cds;

    cout << "O valor total gasto com CDs foi de " << total << " reais." << endl;
    cout << "O valor medio gasto em cada CD e de " << media << " reais." << endl;

return 0;
}