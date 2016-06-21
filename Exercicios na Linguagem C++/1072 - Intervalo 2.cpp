#include <iostream>
 
using namespace std;

/*
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.

Entrada

A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o número de casos de teste.
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
 

Saída

Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão fora (out) do intervalo.

Exemplo de Entrada	Exemplo de Saída
4
14
123
10
-25
                            2 in
                            2 out
*/ 
int main() {
 
     int n, qntd, in = 0, out =0;
    cin>>qntd;
    for(int i = 0; i < qntd; i++)
    {
        cin >> n;
        if(n >= 10 && n <= 20)
        {
            in +=1;
        }
        else
        {
            out+=1;
        }

    }
    cout <<"" << in << " in" << endl;
    cout <<"" << out<< " out" << endl;
    return 0;
}
