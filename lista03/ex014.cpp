#include <iostream>
using namespace std;

int main () {

    float nota;

    while (nota >= 0 && nota <= 10) {

        cout << "Insira a nota: ";
        cin >> nota;

        if (nota >= 7 && nota <= 10) {
            cout << "Aprovado" << endl;
        }

        else if (nota >= 4 && nota < 7) {
            cout << "Em exame" << endl;
        }

        else if (nota >= 0 && nota < 4) {
            cout << "Reprovado" << endl;
        }

        else {
            cout << "Sistema encerrado!" << endl;
        }
    }
return 0;
}