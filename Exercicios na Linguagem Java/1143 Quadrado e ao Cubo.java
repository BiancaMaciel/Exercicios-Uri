package Quadrado;
//1143 Quadrado e ao Cubo
/*Escreva um programa que leia um valor inteiro N (1 < N < 1000). Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

Entrada

O arquivo de entrada contém um número inteiro positivo N.

Saída

Imprima a saída conforme o exemplo fornecido.

Exemplo de Entrada	Exemplo de Saída
5
                          1 1 1
                          2 4 8
                          3 9 27
                          4 16 64
                          5 25 125
 */
import java.io.IOException;
import java.util.Scanner;

public class Main {
  
    public static void main(String[] args) throws IOException {
         
        Scanner sc = new Scanner (System.in);
        int linha = sc.nextInt();
         
        for(int i = 1; i <= linha; i++)
        {
            int calc = i * i;
            int calc2 = calc * i;
            System.out.printf(i + " " + calc + " " + calc2 + "\n");
            calc = 0;
            calc2 = 0;
        }
    }
  
}
