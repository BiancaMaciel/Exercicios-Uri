#include<iostream>
#include <iomanip>
#include <math.h>
#include <map>
using namespace std;
using std::setprecision;
/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.



Entrada

O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída

O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.

Exemplo de Entrada	Exemplo de Saída
3 2
Total: R$ 10.00
4 3
Total: R$ 6.00
2 3
Total: R$ 13.50
*/
int main()
{
    int a;
    double b, calc;
    std::cin >> a;
    std::cin >> b;
    std::map<int, double> MyMap;
    std::map< int, double>::iterator MyIterMap;
    MyMap[1] = 4.00;
    MyMap[2] = 4.50;
    MyMap[3] = 5.00;
    MyMap[4] = 2.00;
    MyMap[5] = 1.50;
    MyIterMap = MyMap.begin();

    for(int i = 0; i <= MyMap.size(); ++i)
    {
            if(i == a)
            {
                 int values = (*MyIterMap).first + a;
                 calc  = MyMap[values - 1] * b;
            }

    }

    std::cout<<"Total: R$ " <<std::setprecision(2) << std::fixed << calc << std::endl;
    return 0;
}
