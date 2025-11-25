#include<stdio.h>
#include<stdlib.h>

int main(){

    //declara uma string com tamanho maximo de 50 caracters
    char cidade[50];
    char estado[50];
     int ano; 
     int respSub;

    printf("digite sua cidade: ");
    fgets(cidade, 50, stdin);

     printf("digite seu estado: ");
    fgets(estado, 50, stdin);


     printf("Qual é o seu ano de nascimento?:");
    scanf("%d", &ano); 

    respSub = 2025 - ano;

   printf("Você nasceu em %s e no estado %s e tem %d anos. \n", cidade, estado, respSub) ;

    system("pause");
    return 0;
}