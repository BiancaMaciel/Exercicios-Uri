#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;
using std::setprecision;
/*
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada

Leia três valores de ponto flutuante (double) A, B e C.

Saída

Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.

Exemplos de Entrada	Exemplos de Saída
10.0 20.1 5.1
R1 = -0.29788
R2 = -1.71212
0.0 20.0 5.0
Impossivel calcular
10.3 203.0 5.0
R1 = -0.02466
R2 = -19.68408
10.0 3.0 5.0
Impossivel calcular
*/
int main()
{
    double a, b, c, delta;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    delta = ((b * b) - (4 * a * c));
    if(delta <= 0 || a == 0 || b == 0 || c == 0)
    {
        std::cout<<"Impossivel calcular"<< std::endl;
    }
    else
    {
        double x1 = ((- b + sqrt(delta)) / (2 * a));
        double x2 = ((- b - sqrt(delta)) / (2 * a));
        std::cout<< "R1 = "  << std::setprecision(5) << std::fixed<< x1 << std::endl;
        std::cout<< "R2 = "  << std::setprecision(5) << std::fixed<< x2 << std::endl;
    }

 
    return 0;
}
