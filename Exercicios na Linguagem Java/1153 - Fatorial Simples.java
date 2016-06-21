package Fatorial;

//1153 - Fatorial Simples

/**
 Ler um valor N. Calcular e escrever seu respectivo fatorial. Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Entrada

A entrada contém um valor inteiro N (0 < N < 13).

Saída

A saída contém um valor inteiro, correspondente ao fatorial de N.

Exemplo de Entrada	Exemplo de Saída
4
                         24
 */
  

import java.io.IOException;
import java.util.Scanner;
public class Main {
  
    public static void main(String[] args) throws IOException {
  
         
        Scanner sc = new Scanner (System.in);
        int soma = 0, cont = 0, mult = 0; 
        int x = sc.nextInt();
        if(x < 13)
        {
            mult = x;
            while(x > 1)
            {
                mult = mult * (x-1);
                x--;
            }
            System.out.println(mult);
         
        }
  
    }
  
}