#include <iostream>
 
using namespace std;
/*
Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível segundo o esquema abaixo, da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi escolhido, através das três palavras fornecidas.



Entrada

A entrada contém 3 palavras, uma em cada linha, necessárias para identificar o animal segundo a figura acima, com todas as letras minúsculas.

Saída

Imprima o nome do animal correspondente à entrada fornecida.

Exemplos de Entrada	Exemplos de Saída
vertebrado
mamifero
onivoro
homem
vertebrado
ave
carnivoro
aguia
invertebrado
anelideo
onivoro
minhoca
*/
 
int main() {
    std::string a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
        if(a == "vertebrado" && b == "ave" && c =="carnivoro")
        {
            std::cout<<"aguia"<< std::endl;
        }
        else if(a == "vertebrado" && b == "ave" && c =="onivoro")
        {
            std::cout<<"pomba"<<std::endl;
        }
        else if(a == "vertebrado" && b == "mamifero" && c =="onivoro")
        {
            std::cout<<"homem"<<std::endl;
        }
        else if(a == "vertebrado" && b == "mamifero" && c =="herbivoro")
        {
            std::cout<<"vaca"<<std::endl;
        }
        else if(a == "invertebrado" && b == "inseto" && c =="hematofago")
        {
            std::cout<<"pulga"<<std::endl;
        }
        else if(a == "invertebrado" && b == "inseto" && c =="herbivoro")
        {
            std::cout<<"lagarta"<<std::endl;
        }
        else if(a == "invertebrado" && b == "anelideo" && c =="hematofago")
        {
            std::cout<<"sanguessuga"<<std::endl;
        }
        else if(a == "invertebrado" && b == "anelideo" && c =="onivoro")
        {
            std::cout<<"minhoca"<<std::endl;
        }

    return 0;
}
