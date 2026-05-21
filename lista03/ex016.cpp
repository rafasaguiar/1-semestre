#include <iostream>
using namespace std;

int main () {

    float salario, despesa, diferenca;
    int quantidade;
    float soma = 0;

    cout << "Digite aqui o valor do seu salario: ";
    cin >> salario;

    while (salario <= 0) {
        cout << "O salario precisa ser um valor positivo nao nulo: ";
        cin >> salario;
    }

    cout << "Quantas despesas voce tem no mes? ";
    cin >> quantidade;

    while (quantidade <= 0) {
        cout << "A quantidade de despesas nao pode ser nula ou negativa, digite novamente: ";
        cin >> quantidade;    
    }

    for (int i = 1; i <= quantidade; i++) {
        cout << "Digite o valor da despesa: ";
        cin >> despesa;

            while (despesa < 0) {
                cout << "O valor da despesa nao pode ser negativo, digite novamente: ";
                cin >> despesa;    
            }

        soma = soma + despesa;
    }

    diferenca = salario - soma;

        if (diferenca > 0) {
            cout << "Diferenca entre salario e despesas: ";
            cout << diferenca << " reais. " << endl;
        }

        else {
            cout << "Reduzir depesas!";
        }


return 0;
}