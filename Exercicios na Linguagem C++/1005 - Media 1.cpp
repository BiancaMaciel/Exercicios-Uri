#include <iostream>
 
using namespace std;

#include <iomanip>;
using std::setprecision;
/*
Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

Entrada

O arquivo de entrada contém 2 valores com uma casa decimal cada um.

Saída

Calcule e imprima a variável MEDIA conforme exemplo abaixo, com 5 dígitos após o ponto decimal e com um espaço em branco antes e depois da igualdade. Utilize variáveis de dupla precisão (double) e como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

Exemplos de Entrada	Exemplos de Saída
5.0
7.1
MEDIA = 6.43182
0.0
7.1
MEDIA = 4.84091
10.0
10.0
MEDIA = 10.00000
*/
int main()
{

    //Exercicio 5
    double a, b, media;
    std::cout<<"";
    std::cout<<"";
    std::cin >> a;
    std::cin >> b;
    // 5 * 3,5 = 17,5 + 7.1 * 7,5 = 53,25 / 11 =
    media = (((a * 3.5) +  (b * 7.5)) / 11);
    std::cout << "MEDIA = "<< setprecision(5)<< fixed << media << endl;

    return 0;
}
