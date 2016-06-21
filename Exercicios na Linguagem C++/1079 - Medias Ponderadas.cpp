#include<iostream>
#include <iomanip>
#include <vector>
using namespace std;
using std::setprecision;

/*
Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.

Entrada

O arquivo de entrada contém um valor inteiro N na primeira linha. Cada N linha a seguir contém um caso de teste com três valores com uma casa decimal cada valor.

Saída

Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
3
6.5 4.3 6.2
5.1 4.2 8.1
8.0 9.0 10.0
                            5.7
                            6.3
                            9.3
*/
int main()
{
    int qnt = 0;
    double nota1 = 0, nota2 = 0, nota3 = 0, calc = 0;
    float media = 0;
    cin >> qnt;
    std::vector<double> aux;

    for(int i = 1; i <= qnt; i++)
    {
        cin >> nota1 >> nota2 >> nota3;
        media = (float)(((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/ 10);
        aux.push_back(media);
    }

    for(int k = 0; k < aux.size(); k++)
    {
        cout<<"" << std::fixed << std::setprecision(1)<< aux[k]  << endl;
    }

    return 0;
}
