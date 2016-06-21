#include <iostream>
using namespace std;
 
/*
Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

Entrada

O arquivo de entrada contém 100 números inteiros, positivos e distintos.

Saída

Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
2
113
45
34565
6
...
8
 
                            34565
                            4
*/
int main() {
 int maior = 0, n, po= 0;
    for(int i = 1; i <= 100; i++)
    {
        cin >> n;
        if(n > maior)
        {
            maior = n;
            po = i;
        }
    }
    cout<<"" << maior << endl;
    cout<<"" << po<< endl;

    return 0;
}
