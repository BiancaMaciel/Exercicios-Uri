package NumeroPerfeito;

//1164 - Numero Perfeito

/*Na matematica, um numero perfeito e um numero inteiro para o qual a soma de todos os seus divisores positivos proprios (excluindo ele mesmo) e igual ao proprio numero. Por exemplo o numero 6 e perfeito, pois 1+2+3 e igual a 6. Sua tarefa e escrever um programa que imprima se um determinado numero e perfeito ou nao.

Entrada

A entrada contem varios casos de teste. A primeira linha da entrada contem um inteiro N (1 ≤ N ≤ 20), indicando o numero de casos de teste da entrada. Cada uma das N linhas seguintes contem um valor inteiro X (1 ≤ X ≤ 108), que pode ser ou nao, um numero perfeito.

Saida

Para cada caso de teste de entrada, imprima a mensagem “X eh perfeito” ou “X nao eh perfeito”, de acordo com a especificação fornecida.

Exemplo de Entrada	Exemplo de Saida
3
6
5
28
                       6 eh perfeito
                       5 nao eh perfeito
                       28 eh perfeito 
*/
import java.io.IOException;  
import java.util.Scanner;
public class Main {
  
    public static void main(String[] args) throws IOException {
  
  
        Scanner sc = new Scanner (System.in);
        int cont = 0, soma = 0;
         
        double vezes = sc.nextInt();
         
        while(cont < vezes)
        {
            int n = sc.nextInt();
            for(int i = 1; i < n; i++)
            {
                if(n % i == 0)
                {
                    soma += i;
 
                }
            }
            if(soma == n)
            {
                System.out.println(n + " eh perfeito");
                soma = 0;
            }
            else if (soma != n)
            {
                System.out.println(n + " nao eh perfeito");
                soma = 0;
            }
            cont++;
        } 
    } 
}