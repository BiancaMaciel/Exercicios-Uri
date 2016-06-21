#include<iostream>
#include <iomanip>
#include <math.h>
#include <map>
#include <vector>
using namespace std;
using std::setprecision;

/*
Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo. Caso não for possível mostre a mensagem “divisao impossivel” para os valores em questão.

Entrada

A entrada contém um número inteiro N. Este N será a quantidade de pares de valores inteiros (X e Y) que serão lidos em seguida.

Saída

Para cada caso mostre o resultado da divisão com um dígito após o ponto decimal, ou “divisao impossivel” caso não seja possível efetuar o cálculo.

Obs.: Cuide que a divisão entre dois inteiros em algumas linguagens como o C e C++ gera outro inteiro. Utilize cast :)

Exemplo de Entrada	Exemplo de Saída
3
3 -2
-8 0
0 8
                           -1.5
                           divisao impossivel
                           0.0
*/
int main()
{
    int n = 0 , cont = 0;
    double x = 0., y = 0.;
    double calc;

    cin >> n;
    while(cont < n)
    {
        cin >> x >> y;
        if(y== 0)
            cout<<"divisao impossivel"<< std::endl;
        else
        {
            calc  = x / y;
            cout<<calc <<std::setprecision(1) << std::fixed <<std::endl;
        }
        cont++;
    }
    return 0;
}
