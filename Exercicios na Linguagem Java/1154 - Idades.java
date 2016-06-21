package Idades;

//1154 - Idades

/*Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém o valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos.

Entrada

A entrada contém um número indeterminado de inteiros. A entrada será encerrada quando um valor negativo for lido.

Saída

A saída contém um valor correspondente à média de idade dos indivíduos.

A média deve ser impressa com dois dígitos após o ponto decimal.

Exemplo de Entrada	Exemplo de Saída
34
56
44
23
-2
                              39.25 
*/
import java.io.IOException; 
import java.util.Scanner;

public class Main {
  
    public static void main(String[] args) throws IOException {
  
        Scanner sc = new Scanner (System.in);
        double cont = 0, soma = 0, media= 0; 
 
        while(true)
        {
            int x = sc.nextInt();
            if(x > 0)
            {
                soma += x;
            }
            if(x < 0)
                break;
            cont++;
        }
        media = soma / cont;
        System.out.printf( "%.2f\n", media);  
    } 
}