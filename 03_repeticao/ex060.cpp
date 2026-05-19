// O Sr. Manoel Joaquim possui uma grande loja de artigos de R$ 1,99, com cerca de 10 caixas. Para
// agilizar o cálculo de quanto cada cliente deve pagar, ele desenvolveu uma tabela que contém o
// número de itens que o cliente comprou e ao lado o valor da conta. Desta forma a atendente do
// caixa precisa apenas contar quantos itens o cliente está levando e olhar na tabela de preços. Você
// foi contratado para desenvolver o programa que monta esta tabela de preços, que conterá os preços
/// de 1 até 50 produtos, conforme o exemplo abaixo:

// 6

// Lojas Quase Dois - Tabela de preços
// 1 - R$ 1.99
// 2 - R$ 3.98
// ...
// 50 - R$ 99.50

#include <iostream>
using namespace std;

int main () {
    int itens;
    float compra;
    float total = 0;
    int contador = 1;

    cout << "Tabela fixa de precos - 1 a 50 produtos: ";
    while (contador <= 50) {
        total = total + 1.99;
        cout << contador << "- R$ " << total << endl;
        contador++;
    }

    contador = 1;
    total = 0;

    cout << "Quantos itens estao sendo comprados? ";
    cin >> itens;

    while (itens <= 0) {
        cout << "Digite um valor maior ou igual a 1: ";
        cin >> itens;
    }

    while (contador <= itens) {
        total = total + 1.99;
        cout << contador << "- R$ " << total << endl;
        contador++;
    }

    compra = itens * 1.99;

    cout << "Total da compra: " << compra << " reais." ;

return 0;
}