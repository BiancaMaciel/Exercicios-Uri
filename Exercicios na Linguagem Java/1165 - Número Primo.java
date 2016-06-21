package NumeroPrimo;

//1165 - Número Primo

/*
Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.
Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor inteiro X (1 < X ≤ 107), que pode ser ou não, um número primo.
Saída
Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”, de acordo com a especificação fornecida.
Exemplo de Entrada	Exemplo de Saída
3
8
51
7
                                       8 nao eh primo
                                       51 nao eh primo
                                       7 eh primo
*/
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
 
        Scanner sc = new Scanner (System.in);
        int div = 0, cont = 0;
         
        double vezes = sc.nextInt();
         
        while(cont < vezes)
        {
            int n = sc.nextInt();
            for(int i = 1; i <= n; i++)
            {
                if(n % i == 0 && n % n == 0)
                {
                    div++;
                }
            }
            if(div != 2)
            {
                System.out.println(n + " nao eh primo");
                div = 0;
            }
            else if (div == 2)
            {
                System.out.println(n + " eh primo");
                div = 0;
            }
            cont++;
        } 
    }
}