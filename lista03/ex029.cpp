// Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade e
// quantidade de filhos. Fazer um programa que informe:
// • a média de idade do grupo;
// • quantidade de pessoas com mais de 5 filhos;
// • porcentagem de pessoas com menos de 20 anos e com filhos;
// • quantidade de pessoas entrevistadas;
// O programa finalizará a leitura dos dados quando for digitado um valor negativo para a idade.

#include <iostream>
using namespace std;

int main () {
    int idadepessoa, numerodefilhos;
    int jovemcomfilho = 0, muitosfilhos = 0, somaidades = 0, totalpessoas = 0;
    float mediaidades, percentualjovens;

    do {
        cout << "Qual a sua idade? ";
        cin >> idadepessoa;

        if (idadepessoa < 0) {
            break;
        }

        cout << "Quantos filhos voce possui? ";
        cin >> numerodefilhos;

            if (idadepessoa < 20 && numerodefilhos > 0) {
                jovemcomfilho++;
            }

            if (numerodefilhos > 5) {
                muitosfilhos++;
            }

        somaidades = somaidades + idadepessoa;
        totalpessoas++;
    } while (idadepessoa > 0);

    if (totalpessoas > 0) {
    mediaidades = (float)somaidades / totalpessoas;
    percentualjovens = ((float)jovemcomfilho / totalpessoas) * 100;
    }

    cout << "--- RELATORIO DA PESQUISA ---" << endl;
    cout << endl;
    cout << "Media de idade do grupo: " << mediaidades << endl;
    cout << "Qunatidade de pessoas com mais de 5 filhos: " << muitosfilhos << endl;
    cout << "Percentual de pessoas com menos de 20 anos e com filhos: " << percentualjovens << "%" << endl;
    cout << "Total de entrevistados: " << totalpessoas;

return 0;
}