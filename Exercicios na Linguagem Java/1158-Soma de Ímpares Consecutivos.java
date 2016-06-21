package Soma;

//1158-Soma de Ímpares Consecutivos
/*

Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de Y ímpares consecutivos a partir de X inclusive o próprio X se ele for ímpar. Por exemplo:
para a entrada 4 5, a saída deve ser 45, que é equivalente à: 5 + 7 + 9 + 11 + 13
para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9 + 11 + 13

Entrada

A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída

Imprima a soma dos consecutivos números ímpares a partir do valor X.

Exemplo de Entrada	Exemplo de Saída
2
4 3
11 2
                           21
                           24
*/ 

import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
         
        Scanner entrada = new Scanner(System.in);
         
        int quantidadeDeLoop = entrada.nextInt();
        int contadorDeLoop = 0, contadorY = 1, soma = 0, armazenaX = 0;
         
            while(contadorDeLoop < quantidadeDeLoop)
            {
                int x = entrada.nextInt(); 
                int y = entrada.nextInt();
                armazenaX = x;
                if(x % 2 != 0)
                    soma += x;
                else{
                    armazenaX = x + 1;
                    soma+= armazenaX;
                }
                while(contadorY < y)
                {
                    armazenaX += 2;
                    soma += armazenaX;
                    contadorY++;
                }   
                contadorDeLoop++;
                System.out.println(soma);
                contadorY = 1;
                soma = 0;
            }
             
        }
}