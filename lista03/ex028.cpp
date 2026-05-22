// Escreva um programa que leia um número indeterminado de notas entre 0.0 e 10.0. Ao final imprima
// a quantidade de notas maiores ou iguais a 7. A digitação deve ser encerrada quando for digitada uma
// nota inválida.

#include <iostream>
using namespace std;

int main () {
    float nota;
    int maiores = 0;

    do {
        cout << "Insira uma nota: ";
        cin >> nota;

            if (nota >= 7 && nota <= 10) {
                maiores++;    
            }

    } while (nota >= 0 && nota <= 10);

    cout << "Notas maiores ou iguais que 7: " << maiores << endl;

return 0;
}