#include <iostream>
 
using namespace std;

#include <iomanip>
using std::setprecision;

/*
Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas, informar o total a receber no final do m�s, com duas casas decimais.

Entrada

O arquivo de entrada cont�m um texto (primeiro nome do vendedor) e 2 valores de dupla precis�o (double) com duas casas decimais, representando o sal�rio fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.

Sa�da

Imprima o total que o funcion�rio dever� receber, conforme exemplo fornecido.

Exemplos de Entrada	Exemplos de Sa�da
JOAO
500.00
1230.30
TOTAL = R$ 684.54
PEDRO
700.00
0.00
TOTAL = R$ 700.00
MANGOJATA
1700.00
1230.50
TOTAL = R$ 1884.58
*/
int main()
{
    std::string name;
    double salary, venda, calc;
    std::cin >> name;
    std::cin >> salary;
    std::cin >> venda;
    calc = (venda * 0.15) + salary;
    std::cout << "TOTAL = R$ " << std::setprecision(2) << std::fixed << calc << std::endl;

    return 0;
}
