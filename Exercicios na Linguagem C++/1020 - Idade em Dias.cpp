#include <iostream>
 
using namespace std;
/*
Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

Entrada

O arquivo de entrada contém um valor inteiro.

Saída

Imprima a saída conforme exemplo fornecido.

Exemplo de Entrada	Exemplo de Saída
400
                            1 ano(s)
                            1 mes(es)
                            5 dia(s)
*/
int main()
{
    int idade,  dia, anos, meses, calc, calc1;
    int ano = 365;
    cin>>idade;
    anos = idade / ano ;
    calc = std::abs((anos * 365) - idade);
    meses = (calc / 30);
    calc1 = std::abs((meses * 30) - calc);
    dia = calc1;
    std::cout <<"" << anos << " ano(s)" << std::endl;
    std::cout <<"" << meses << " mes(es)" << std::endl;
    std::cout <<"" << dia << " dia(s)" << std::endl;

    return 0;
}
