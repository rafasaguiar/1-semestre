#include <iostream>
using namespace std;

int main () {

    int soma = 0;
    int contador = 1;
    int valorA, valor;
    float media;

    cout << "Insira um numero inteiro: ";
    cin >> valorA;

    soma = soma + valorA;

    while (soma < 100) {
        cout << "Insira um valor para somar: ";
        cin >> valor;
        soma = soma + valor;
        contador++;
    }

    media = soma / contador;

    cout << "Foram lidos " << contador << " numeros." << endl;
    cout << "A media dos numeros e igual a: " << media << endl;

return 0;
}