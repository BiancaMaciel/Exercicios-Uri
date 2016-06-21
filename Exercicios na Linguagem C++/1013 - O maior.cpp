#include<iostream>
using namespace std;
/*
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:



Entrada

O arquivo de entrada contém três valores inteiros.

Saída

Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".

Exemplos de Entrada	Exemplos de Saída
7 14 106
                             106 eh o maior
217 14 6
                             217 eh o maior
*/
int funcao(int a, int b)
{
    int maior = ((a + b + std::abs(a - b))/ 2);
    return  maior;

}
int main()
{
    int a, b, c, resultado;
    std::cin >> a >> b >> c;
    resultado = funcao(a, b);
    resultado = funcao(resultado, c);
    std::cout <<"" << resultado << " eh o maior" << std::endl;
    return 0;
}
