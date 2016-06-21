#include <iostream>
 
using namespace std;
/*
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

Entrada

O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída

Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.

Exemplo de Entrada	Exemplo de Saída
-5
0
-3
-4
12
                        3 valor(es) par(es)
                        2 valor(es) impar(es)
                        1 valor(es) positivo(s)
                        3 valor(es) negativo(s)
*/
 
int main() {
   int a, cont = 0, par = 0, impar = 0, positivo = 0, negativo = 0;

    while(cont < 5)
    {
        std::cin >> a;
        if(a % 2 == 0)
        {
               par++;
        }
        else if (a % 2 != 0)
        {
            impar++;
        }
        if(a > 0)
        {
               positivo++;
        }
        else if ( a < 0)
        {
               negativo++;
        }
        cont++;
    }
    cout<<""<< par<<" valor(es) par(es)"<<endl;
    cout<<""<< impar<<" valor(es) impar(es)"<<endl;
    cout<<""<< positivo<<" valor(es) positivo(s)"<<endl;
    cout<<""<< negativo<<" valor(es) negativo(s)"<<endl;


 
    return 0;
}
