#include <iostream>
 
using namespace std;
/*
Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

Entrada

O arquivo de entrada contém 2 valores inteiros.

Saída

Imprima a variável SOMA com todas as letras maiúsculas, com um espaço em branco antes e depois da igualdade seguido pelo valor correspondente à soma de A e B. Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

Exemplos de Entrada	Exemplos de Saída
30
10
SOMA = 40
-30
10
SOMA = -20
0
0
SOMA = 0
*/ 
int main() {
 
   int a, b, x;
    std::cout<<"";
    std::cout<<"";
    std::cin >> a;
    std::cin >> b;
    x = a + b;
    std::cout << "SOMA = " << x << endl;
 
    return 0;
}
