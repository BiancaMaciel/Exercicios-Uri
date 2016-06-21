#include <iostream>
 
using namespace std;

/*
Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe à qual cidade o DDD pertence, considerando a tabela abaixo:




Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar:
DDD nao cadastrado

Entrada

A entrada consiste de um único valor inteiro.

Saída

Imprima o nome da cidade correspondente ao DDD existente na entrada. Imprima DDD nao cadastrado caso não existir DDD correspondente ao número digitado.

Exemplo de Entrada	Exemplo de Saída
11
                        Sao Paulo
*/
int main() {
 
   int n;
    cin>>n;
    if(n == 61)
    {
        cout<<"Brasilia"<<endl;
    }
    else if(n == 71)
    {
        cout<< "Salvador" << endl;
    }
    else if(n == 11)
    {
        cout<<"Sao Paulo" << endl;
    }
    else if(n == 21)
    {
        cout<< "Rio de Janeiro" << endl;
    }

    else if(n == 32)
    {

        cout<<"Juiz de Fora"<<endl;
    }
    else if(n == 19)
    {
        cout<<"Campinas"<<endl;
    }

    else if(n == 27)
    { cout << "Vitoria" << endl;
    }
    else if(n == 31)
    {
        cout<<"Belo Horizonte" << endl;
    }
    else
    {
        cout<<"DDD nao cadastrado"<< endl;
    }
    return 0;
}
