#include <iostream>
 
using namespace std;
/*
Faça um programa que mostre os números pares entre 1 e 100, inclusive.

Entrada

Neste problema extremamente simples de repetição não há entrada.

Saída

Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.

Exemplo de Entrada	Exemplo de Saída
                        2
                        4
                        6
                        ...
                        100
*/
 
int main() {
 
    for(int i = 2; i <= 100; ++i)
    {
        if(i % 2 == 0)
        {
            std::cout<<i<<std::endl;
        }
    }
    return 0;
}
