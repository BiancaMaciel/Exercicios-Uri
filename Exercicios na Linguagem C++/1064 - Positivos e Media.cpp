#include<iostream>
#include <iomanip>
using namespace std;
using std::setprecision;

/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada

A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes número será positivo.

Saída

O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.

Exemplo de Entrada	Exemplo de Saída
7
-5
6
-3.4
4.6
12
                   4 valores positivos
                   7.4
*/
int main()
{
    double n;
    double  var = 0, soma =0;
    for(int i = 0; i < 6; i++)
    {
        cin >> n;
        if(n > 0)
        {
            var +=1;
            soma += n;
        }
    }
    double media = soma / var;
    cout <<"" << var << " valores positivos" << endl;
    cout <<"" << media<< endl;
 
    return 0;
}
