// Calcule a raiz quadrada de um número inteiro positivo sem usar a função sqrt. Para isso, você precisa
// saber que a raiz quadrada de um número N é igual à quantidade de números ímpares consecutivos (a
// partir do 1) cuja soma é igual a N (ou o mais próxima possível de N). Ou melhor, exemplificando:
// raiz de 16 = 1 + 3 + 5 + 7 (4 termos) = 16
// raiz de 25 = 1 + 3 + 5 + 7 + 9 (5 termos) = 25

#include <iostream>
using namespace std;

int main () {
    int numero;
    int soma = 0;
    int contador = 1;
    int impares = 0;

    cout << "Digite um numero inteiro positivo para calcular sua raiz quadrada: ";
    cin >> numero;

    while (soma < numero) {
        soma = soma + contador;
        impares++;
        contador += 2;
    }

    cout << "A raiz quadrada de " << numero << " e igual a " << impares << endl;

return 0;
}