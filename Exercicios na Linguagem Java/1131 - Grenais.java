import java.io.IOException;

import java.util.Scanner; 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua soluÃ§Ã£o execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su soluciÃ³n ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        int simNao = 0, contInter = 0, contGremio = 0, empates = 0, contGrenais = 1;

		Scanner sc = new Scanner (System.in);
		while(true)
		{
			int inter = sc.nextInt();
			int gremio = sc.nextInt();
			if(inter > gremio)
				contInter++;
			if(gremio > inter)
				contGremio++;
			if(inter == gremio)
				empates++;
			System.out.println("Novo grenal (1-sim 2-nao)");
			simNao = sc.nextInt();
			
			if(simNao == 1)
			{
				contGrenais++;
				continue;
			}
			else if(simNao == 2)
			{
				break;
			}
		}
		 System.out.println(contGrenais +" grenais");
		 System.out.println("Inter:" + contInter);
		 System.out.println("Gremio:" + contGremio);
		 System.out.println("Empates:" + empates);
		 if(contInter > contGremio)
			 System.out.println("Inter venceu mais");
		 else if(contGremio > contInter)
			 System.out.println("Gremio venceu mais");
		 else if (empates != 0)
			 System.out.println("Nao houve vencedor");

 
    }
 
}import java.io.IOException;

import java.util.Scanner; 
/*
 * A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. Escreva um programa para ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL. Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida, caso contrário deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estatística.
- O número de vitórias do Inter.
- O número de vitórias do Grêmio.
- O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).

Entrada

O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo Grêmio respectivamente. Em seguida háverá um inteiro (1 ou 2), correspondente à repetição do programa.

Saída

Após cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". Quando o algoritmo for encerrado deve ser mostrado as estatísticas conforme a descrição apresentada acima. Obs: a palavra "Gremio" deve ser impressa sem acento, conforme o exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
3 2
1
2 3
1
3 1
2                  Novo grenal (1-sim 2-nao)
                   Novo grenal (1-sim 2-nao)
                   Novo grenal (1-sim 2-nao)
                   3 grenais
                   Inter:2
                   Gremio:1
                   Empates:0
                   Inter venceu mais
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        int simNao = 0, contInter = 0, contGremio = 0, empates = 0, contGrenais = 1;

		Scanner sc = new Scanner (System.in);
		while(true)
		{
			int inter = sc.nextInt();
			int gremio = sc.nextInt();
			if(inter > gremio)
				contInter++;
			if(gremio > inter)
				contGremio++;
			if(inter == gremio)
				empates++;
			System.out.println("Novo grenal (1-sim 2-nao)");
			simNao = sc.nextInt();
			
			if(simNao == 1)
			{
				contGrenais++;
				continue;
			}
			else if(simNao == 2)
			{
				break;
			}
		}
		 System.out.println(contGrenais +" grenais");
		 System.out.println("Inter:" + contInter);
		 System.out.println("Gremio:" + contGremio);
		 System.out.println("Empates:" + empates);
		 if(contInter > contGremio)
			 System.out.println("Inter venceu mais");
		 else if(contGremio > contInter)
			 System.out.println("Gremio venceu mais");
		 else if (empates != 0)
			 System.out.println("Nao houve vencedor");

 
    }
 
}