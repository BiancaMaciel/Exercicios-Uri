#include <iostream>
 
using namespace std;


#include <iomanip>;
using std::setprecision;
/*
A fórmula para calcular a área de uma circunferência é: area = p . raio2. Considerando para este problema que p = 3.14159:

- Efetue o cálculo da área, elevando o valor de Raio ao quadrado e multiplicando por p.

Entrada

A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.

Saída

Apresentar a mensagem "A=" seguido pelo valor da variável area, conforme exemplo abaixo, com 4 casas após o ponto decimal. Utilize variáveis de dupla precisão (double). Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

Exemplos de Entrada	Exemplos de Saída
2.00
A=12.5664
100.64
A=31819.3103
150.00
A=70685.7750
*/
int main() {
    
    double area = 0., radius = 0., pi = 3.14159;
    std::cout<<"";
    std::cin>>radius;

    area = pi * (radius * radius);

    std::cout<<"A=" <<setprecision(4) << fixed << area  <<endl;

    return 0;
}
