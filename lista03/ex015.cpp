#include <iostream>
using namespace std;

int main () {

    int valorN;
    float soma = 0;

    cout << "Defina um valor para n: ";
    cin >> valorN;

    for (int i = 1; i <= valorN; i++) {
        soma = soma + (i / (2.0 * i));
    }

    cout << "O resultado da serie e igual a " << soma << endl;

return 0;
}