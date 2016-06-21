#include <iostream>
 
using namespace std;
/*
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Entrada

O arquivo de entrada contém 4 valores inteiros.

Saída

Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.

Exemplos de Entrada	Exemplos de Saída
5
6
7
8
DIFERENCA = -26
0
0
7
8
DIFERENCA = -56
5
6
-7
8
DIFERENCA = 86
*/ 
int main() {
 
    int a , b, c, d, diferenca;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    std::cin>>d;
    diferenca = (a * b - c * d);

    std::cout << "DIFERENCA = " << diferenca << std::endl;

 
    return 0;
}
