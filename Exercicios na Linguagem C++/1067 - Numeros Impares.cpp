#include <iostream>
 
using namespace std;
/*
Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os �mpares de 1 at� X, um valor por linha, inclusive o X, se for o caso.

Entrada

O arquivo de entrada cont�m 1 valor inteiro qualquer.

Sa�da

Imprima todos os valores �mpares de 1 at� X, inclusive X, se for o caso.

Exemplo de Entrada	Exemplo de Sa�da
8
                        1
                        3
                        5
                        7
*/
 
int main() {
 
    int a;
    std::cin >> a;
      for(int i = 0; i <= a; i++)
      {
          if (i % 2 != 0)
          {
              cout<<""<<i<<endl;

          }

      }
 
    return 0;
}
