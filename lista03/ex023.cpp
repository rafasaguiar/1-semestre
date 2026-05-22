#include <iostream>
using namespace std;

int main () {

    int quantidade, idade;
    float percentualmulheresfaixa2;
    int faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;
    float mulheresfaixa2 = 0;
    int quantidademulheres = 0, quantidadehomens = 0;
    float somaidademulheres = 0, somaidadehomens = 0, somaidadegeral = 0;
    float mediamulheres, mediahomens, mediageral;
    char sexo;

    cout << "Quantas pessoas serao entrevistadas? ";
    cin >> quantidade;

    for (int i = 1; i <= quantidade; i++) {
        cout << "Qual o sexo? (M ou F) ";
        cin >> sexo;

            while (sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M') {
                cout << "Escolha uma opcao entre M ou F: ";
                cin >> sexo;
            }

            if (sexo == 'f' || sexo == 'F') {
                quantidademulheres++;
            }

            if (sexo == 'm' || sexo == 'M') {
                quantidadehomens++;
            }

        cout << "Qual a idade? ";
        cin >> idade;
        cout << endl;

            if (idade <= 15) {
                faixa1++;
            }

            if (idade >= 16 && idade <= 30) {
                faixa2++;
                if (sexo == 'f' || sexo == 'F') {
                    mulheresfaixa2++;
                }
            }

            if (idade >= 31 && idade <= 45) {
                faixa3++;
            }

            if (idade >= 46 && idade <= 60) {
                faixa4++;
            }

            if (idade >= 61) {
                faixa5++;
            }

        somaidadegeral = somaidadegeral + idade;

            if (sexo == 'f' || sexo == 'F') {
                somaidademulheres = somaidademulheres + idade;
            }

            if (sexo == 'm' || sexo == 'M') {
                somaidadehomens = somaidadehomens + idade;
            }
    }


    mediageral = somaidadegeral / quantidade;

    if (quantidademulheres > 0) {
        mediamulheres = somaidademulheres / quantidademulheres;
        percentualmulheresfaixa2 = (mulheresfaixa2 / quantidademulheres) * 100;
    }

    if (quantidadehomens > 0) {
        mediahomens = somaidadehomens / quantidadehomens;
    }

    cout << "== RELATORIO FINAL ==" << endl;
    cout << endl;
    cout << "Quantidade de mulheres: " << quantidademulheres << endl;
    cout << "Quantidade de homens: " << quantidadehomens << endl;
    cout << endl;
    cout << "PESSOAS POR FAIXA ETARIA: " << endl;
    cout << "Faixa 1: " << faixa1 << endl;
    cout << "Faixa 2: " << faixa2 << endl;
    cout << "Faixa 3: " << faixa3 << endl;
    cout << "Faixa 4: " << faixa4 << endl;
    cout << "Faixa 5: " << faixa5 << endl;
    cout << endl;
    cout << "MEDIA DE IDADE GERAL E POR SEXO: " << endl;
    cout << "Geral: " << mediageral << endl;
    cout << "Mulheres: " << mediamulheres << endl;
    cout << "Homens: " << mediahomens << endl;
    cout << endl;

    percentualmulheresfaixa2 = (mulheresfaixa2/quantidademulheres) * 100;

    cout << "Percentual de mulheres da faixa 2: " << percentualmulheresfaixa2 << "%" << endl;

return 0;
}