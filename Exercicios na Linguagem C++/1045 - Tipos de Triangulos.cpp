#include<iostream>
#include <iomanip>
#include <math.h>
#include <map>
#include <vector>
/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A = B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
Entrada

A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída

Imprima todas as classificações do triângulo especificado na entrada.

Exemplos de Entrada	Exemplos de Saída
7.0 5.0 7.0
TRIANGULO ACUTANGULO
TRIANGULO ISOSCELES
6.0 6.0 10.0
TRIANGULO OBTUSANGULO
TRIANGULO ISOSCELES
6.0 6.0 6.0
TRIANGULO ACUTANGULO
TRIANGULO EQUILATERO
5.0 7.0 2.0
NAO FORMA TRIANGULO
6.0 8.0 10.0
TRIANGULO RETANGULO
*/

using namespace std;
using std::setprecision;

int main()
{
    double a, b, c, maior, aux, powMaior, powA, powB, powC, somaPow, soma;
    cin>>a>>b>>c;

    if( a >= b && a >= c)
    {
        maior = a;
        powMaior = pow(maior,2);
        powB = pow(b,2);
        powC = pow(c,2);
        somaPow = powB + powC;
        soma = b + c;
    }
    else if( b >= a && b >= c)
    {
        maior = b;
        powMaior = pow(maior,2);
        powC = pow(c,2);
        powA = pow(a,2);
        somaPow = powC + powA;
        soma = c + a;
    }
    else if (c >= a && c >= b)
    {
        maior = c;
        powMaior = pow(maior,2);
        powB = pow(b,2);
        powA = pow(a,2);
        somaPow = powB + powA;
        soma = b + a;
    }
    else if( a == b && b == c && a == c)
    {
        maior  = a;
         powMaior = pow(maior,2);
        powB = pow(b,2);
        powC = pow(c,2);
        somaPow = powB + powC;
        soma = b + c;
    }
    if ( maior >= soma)
    {
        cout << "NAO FORMA TRIANGULO" << std::endl;
    }
    else
    {
        if (powMaior == somaPow)
        {
            cout << "TRIANGULO RETANGULO" << std::endl;
        }
        if ( powMaior > somaPow)
        {
            cout << "TRIANGULO OBTUSANGULO" << std::endl;
        }
        if ( powMaior < somaPow)
        {
            cout << "TRIANGULO ACUTANGULO" << std::endl;
        }
        if ( a == b &&  a == c )
        {
            cout << "TRIANGULO EQUILATERO" << std::endl;
        }
        if ((a==b && b!=c) || (b==c && c!=a) || (a==c && c!=b))
        {
            cout << "TRIANGULO ISOSCELES" << std::endl;
        }
    }

    return 0;
}#include<iostream>
#include <iomanip>
#include <math.h>
#include <map>
#include <vector>
using namespace std;
using std::setprecision;

int main()
{
    double a, b, c, maior, aux, powMaior, powA, powB, powC, somaPow, soma;
    cin>>a>>b>>c;

    if( a >= b && a >= c)
    {
        maior = a;
        powMaior = pow(maior,2);
        powB = pow(b,2);
        powC = pow(c,2);
        somaPow = powB + powC;
        soma = b + c;
    }
    else if( b >= a && b >= c)
    {
        maior = b;
        powMaior = pow(maior,2);
        powC = pow(c,2);
        powA = pow(a,2);
        somaPow = powC + powA;
        soma = c + a;
    }
    else if (c >= a && c >= b)
    {
        maior = c;
        powMaior = pow(maior,2);
        powB = pow(b,2);
        powA = pow(a,2);
        somaPow = powB + powA;
        soma = b + a;
    }
    else if( a == b && b == c && a == c)
    {
        maior  = a;
         powMaior = pow(maior,2);
        powB = pow(b,2);
        powC = pow(c,2);
        somaPow = powB + powC;
        soma = b + c;
    }
    if ( maior >= soma)
    {
        cout << "NAO FORMA TRIANGULO" << std::endl;
    }
    else
    {
        if (powMaior == somaPow)
        {
            cout << "TRIANGULO RETANGULO" << std::endl;
        }
        if ( powMaior > somaPow)
        {
            cout << "TRIANGULO OBTUSANGULO" << std::endl;
        }
        if ( powMaior < somaPow)
        {
            cout << "TRIANGULO ACUTANGULO" << std::endl;
        }
        if ( a == b &&  a == c )
        {
            cout << "TRIANGULO EQUILATERO" << std::endl;
        }
        if ((a==b && b!=c) || (b==c && c!=a) || (a==c && c!=b))
        {
            cout << "TRIANGULO ISOSCELES" << std::endl;
        }
    }

    return 0;
}
