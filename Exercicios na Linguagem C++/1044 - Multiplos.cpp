#include <iostream>
 
using namespace std;
/*
Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.

Entrada

A entrada contém valores inteiros.

Saída

A saída deve conter uma das mensagens conforme descrito acima.

Exemplo de Entrada	Exemplo de Saída
6 24
                    Sao Multiplos
6 25
                        Nao sao Multiplos
*/ 
int main() {
 
    int a, b, calc;
    std::cin >> a;
    std::cin >> b;
    if(b % a == 0 || a % b == 0)
    {
        std::cout<<"Sao Multiplos"<< std::endl;
    }
    else
    {
        std::cout<<"Nao sao Multiplos"<< std::endl;
    }

 
    return 0;
}
