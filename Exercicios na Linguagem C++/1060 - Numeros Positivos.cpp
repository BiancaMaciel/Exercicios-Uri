#include <iostream>
 
using namespace std;
/*
Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

Entrada

Seis valores, negativos e/ou positivos.

Saída

Imprima uma mensagem dizendo quantos valores positivos foram lidos.

Exemplo de Entrada	Exemplo de Saída
7
-5
6
-3.4
4.6
12
                               4 valores positivos
*/ 
int main() {
 
  int numPositivos = 0, cont = 0;

    while(cont < 6)
    {
        double n;
        cin>>n;
        if(n != 0 && n > 0)
        {
            numPositivos ++;
        }
     cont++;
    }
    std::cout<< numPositivos <<" valores positivos" <<std::endl;

    return 0;
}
